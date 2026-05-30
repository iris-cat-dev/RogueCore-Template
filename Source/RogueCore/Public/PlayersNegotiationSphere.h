#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "BoolDelegateDelegate.h"
#include "DelegateDelegate.h"
#include "PlayerCountChangedSigDelegate.h"
#include "PlayersNegotiationSphere.generated.h"

class APlayerCharacter;
class UNiagaraSystem;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UPlayersNegotiationSphere : public USphereComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerCountChangedSig OnInsidePlayerCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnNegotiationStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolDelegate OnTrackingChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* TrackingEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeupTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerCharacter*> playersInside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTracking;
    
public:
    UPlayersNegotiationSphere(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTrackPlayers(bool shouldTrack);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTrackingEffectActive(bool IsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHeaderText(const FText& inHeaderText);
    
    UFUNCTION(BlueprintCallable)
    APlayerCharacter* GetLastPlayerInside_ServerOnly();
    
};

