#pragma once
#include "CoreMinimal.h"
#include "BioBoosterInterfaceAudio.h"
#include "UsableComponentBase.h"
#include "BioBoosterTerminalUsable.generated.h"

class APlayerCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBioBoosterTerminalUsable : public UUsableComponentBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUsedDelegate, APlayerCharacter*, InUser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FProgressDelegate, float, InProgress);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCanUseDelegate, bool, InCanUse);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCanUseDelegate OnCanUseChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUsedDelegate OnUsedBy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressDelegate OnProgress;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBioBoosterInterfaceAudio Audio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UseDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InterfaceActivated, meta=(AllowPrivateAccess=true))
    bool bInterfaceActivated;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_CollectedRewards, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<APlayerCharacter>> CollectedRewards;
    
public:
    UBioBoosterTerminalUsable(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_InterfaceActivated();
    
    UFUNCTION()
    void OnRep_CollectedRewards(const TArray<TWeakObjectPtr<APlayerCharacter>>& OldCollectedRewards);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanUseInterface() const;
    
};

