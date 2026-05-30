#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PerkState.h"
#include "PerkComponent.generated.h"

class UPerkAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPerkComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPerkDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPerkComponentDelegate, UPerkAsset*, Perk);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerkDelegate OnActivePerksChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerkComponentDelegate OnPerkUsabilityChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPerkAsset*> ClassPerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPerkAsset*> Enhancements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPerkAsset*> CustomPerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool CanActivatePerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnActivePerksReplicated, meta=(AllowPrivateAccess=true))
    TArray<FPerkState> ActivePerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPerkAsset*> LocallyActivatedPerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPerkAsset*> LocallyUsablePerks;
    
public:
    UPerkComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetUseCount(const UPerkAsset* Perk, const int32 NewUseCount);
    
    UFUNCTION(BlueprintCallable)
    void SetPerksActive(const bool NewActive);
    
    UFUNCTION(BlueprintCallable)
    void SetPerkBlocked(const UPerkAsset* Perk, const bool IsBlocked);
    
    UFUNCTION(BlueprintCallable)
    void SetMaximumUses(const UPerkAsset* Perk, const int32 NewMaximumUses);
    
    UFUNCTION(BlueprintCallable)
    void SetEnhancements(const TArray<UPerkAsset*>& NewEnhancements);
    
    UFUNCTION(BlueprintCallable)
    void SetCooldown(const UPerkAsset* Perk, const float NewCooldown);
    
    UFUNCTION(BlueprintCallable)
    void SetClassPerks(const TArray<UPerkAsset*>& NewClassPerks);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetUseCount(const UPerkAsset* Perk, const int32 NewUseCount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetPerkBlocked(const UPerkAsset* Perk, const bool IsBlocked);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetMaximumUses(const UPerkAsset* Perk, const int32 NewMaxUses);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetCooldown(const UPerkAsset* Perk, const float NewCooldown);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ResetPerkStates();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ResetPerkState(const UPerkAsset* Perk);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_IncrementUseCount(const UPerkAsset* Perk);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetPerkStates();
    
    UFUNCTION(BlueprintCallable)
    void ResetPerkState(const UPerkAsset* Perk);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnActivePerksReplicated(const TArray<FPerkState>& OldActivePerks);
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkPerkUsed(const UPerkAsset* Perk);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUseCount(const UPerkAsset* Perk) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingUses(const UPerkAsset* Perk) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaximumUses(const UPerkAsset* Perk) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPerkAsset*> GetEnhancements() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPerkAsset*> GetCustomPerks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCoolDownProgress(const UPerkAsset* Perk) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldown(const UPerkAsset* Perk) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPerkAsset*> GetClassPerks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPerkAsset*> GetActivePerks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsPerk(const UPerkAsset* Perk) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUsePerk(const UPerkAsset* Perk) const;
    
    UFUNCTION(BlueprintCallable)
    void AddCustomPerk(UPerkAsset* NewCustomPerk);
    
};

