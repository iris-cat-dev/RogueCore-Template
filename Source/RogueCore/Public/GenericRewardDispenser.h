#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "RewardDispenserBase.h"
#include "RewardDispenserReward.h"
#include "GenericRewardDispenser.generated.h"

class AEventRewardFrame;
class AFSDPlayerState;
class APlayerCharacter;

UCLASS(Abstract, Blueprintable)
class AGenericRewardDispenser : public ARewardDispenserBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayerId, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AEventRewardFrame* DispenserFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SelectedReward, meta=(AllowPrivateAccess=true))
    FRewardDispenserReward SelectedReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PoweredUp, meta=(AllowPrivateAccess=true))
    bool PoweredUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsActivated, meta=(AllowPrivateAccess=true))
    bool IsActivated;
    
public:
    AGenericRewardDispenser(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool PowerUp(APlayerCharacter* InPlayerCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRewardSelected();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SelectedReward();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PoweredUp();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPoweredUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOwnerAssigned();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenDispenser();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOwningPlayer(APlayerCharacter* PlayerCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRewardDispenserReward GetSelectedReward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerCharacter* GetPlayerCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFSDPlayerState* GetPlayer() const;
    
};

