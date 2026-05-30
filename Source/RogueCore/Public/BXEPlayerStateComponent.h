#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BXEPlayerData.h"
#include "BXEStartLoadout.h"
#include "BXEUnlockInstance.h"
#include "ItemSlotIndex.h"
#include "ReadyUpState.h"
#include "BXEPlayerStateComponent.generated.h"

class AActor;
class AFSDPlayerState;
class UBXEAttributeUnlock;
class UBXEPlayerStateComponent;
class UBXEStartingWeapon;
class UBXEUnlockBase;
class UBXEUnlockCollection;
class UBXEUnlockRarity;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UBXEPlayerStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerDataChanged, const FBXEPlayerData&, OldData, const AFSDPlayerState*, InPlayerState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLoadoutChanged, UBXEPlayerStateComponent*, InBXEPlayerState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLevelUpDelegate, int32, inLevel, const TArray<UBXEUnlockBase*>&, inUnlocks);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelUpDelegate OnLevelUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerDataChanged OnPlayerDataChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadoutChanged OnStartLoadoutChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayerData, meta=(AllowPrivateAccess=true))
    FBXEPlayerData PlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StartLoadOut, meta=(AllowPrivateAccess=true))
    FBXEStartLoadout StartLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBXEUnlockCollection*> CheatCollections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBXEUnlockBase*> CheatUnlocks;
    
public:
    UBXEPlayerStateComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SetUnlocksInBugReporter();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetStartLoadout(const FBXEStartLoadout& InLoadout);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ReadyUp_SetIsReady();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ApplyUnlocksToPlayer(const TArray<FBXEUnlockInstance>& inUnlocks, const FItemSlotIndex InSlot);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddAttributeToUnlockInstance(const FBXEUnlockInstance& InInstance, UBXEAttributeUnlock* InAttribute, AActor* PreviousActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StartLoadOut(const FBXEStartLoadout& OldLoadout);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerData(const FBXEPlayerData& OldData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    int32 GetUnlockInstanceCount(UObject* WorldContext, const FBXEUnlockInstance& InUnlock) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBXEUnlockInstance GetUnlockInSlot(FItemSlotIndex InSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    int32 GetUnlockCount(UObject* WorldContext, UBXEUnlockBase* InUnlock) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBXEStartingWeapon* GetStartingWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UBXEPlayerStateComponent* GetLocalBXEPlayerState(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    TArray<FBXEUnlockInstance> GetCurrentUnlocks(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBXEUnlockInstance> GetAllUnlocksInSlot(FItemSlotIndex InSlot) const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ReceiveLevelUp(int32 inLevel, const TArray<UBXEUnlockBase*>& inUnlocks, const TArray<UBXEUnlockRarity*>& InUnlockRarities);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ReadyUp_SetState(const FReadyUpState& InState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, meta=(WorldContext="WorldContext"))
    void Cheat_StartNegotiation(UObject* WorldContext, UBXEUnlockCollection* InRewardPool);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Cheat_RemoveUnlockFromPlayer(UBXEUnlockBase* InUnlock, FItemSlotIndex InSlot);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Cheat_PrintOutBXEStats();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Cheat_LevelUp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UBXEUnlockBase*> Cheat_GatherUnlocksForSlot(FItemSlotIndex InSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UBXEUnlockCollection*> Cheat_GatherNegotiationCollections();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Cheat_ApplyUnlockToPlayer(UBXEUnlockBase* InUnlock, FItemSlotIndex InSlot, const TArray<UBXEAttributeUnlock*>& Attributes);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Cheat_AddXP_Player(int32 InXP);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Cheat_AddXP(int32 InXP);
    
};

