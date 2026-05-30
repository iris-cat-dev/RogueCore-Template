#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LateJoinPlayerStart.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class ALateJoinPlayerStart : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* UsedBy;
    
public:
    ALateJoinPlayerStart(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUsedBy(APlayerController* NewUsedBy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ServerTriggerPlayerStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetUsedBy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FTransform GetPlayerStartTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClientTriggerPlayerStart();
    
};

