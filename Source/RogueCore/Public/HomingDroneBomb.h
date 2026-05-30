#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "Projectile.h"
#include "HomingDroneBomb.generated.h"

class UEnemyHealthComponent;
class USoundCue;

UCLASS(Blueprintable)
class AHomingDroneBomb : public AProjectile, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnemyHealthComponent* Health;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ArmingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HomingUpdateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetSearchInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HomingAccelerationMagnitude, meta=(AllowPrivateAccess=true))
    float HomingAccelerationMagnitude;
    
public:
    AHomingDroneBomb(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateHomingSpeed();
    
    UFUNCTION(BlueprintCallable)
    void SearchForTarget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_HomingAccelerationMagnitude();
    


public:
    UFUNCTION(BlueprintCallable)
    virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override {}
    UFUNCTION(BlueprintCallable)
    virtual bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override {return false;}
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override{return false;}
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override{return false;}
    
protected:
    UFUNCTION(BlueprintCallable)
    virtual FGameplayTagContainer BP_GetOwnedGameplayTags() const override { return FGameplayTagContainer{};}
    
};

