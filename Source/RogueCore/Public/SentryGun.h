#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OverlapResult -FallbackName=OverlapResult
#include "GameplayTagContainer.h"
#include "AmmoCountChangedEventDelegate.h"
#include "LaserPointerTarget.h"
#include "SentryGunMuzzleSetup.h"
#include "Templates/SubclassOf.h"
#include "TracerData.h"
#include "Upgradable.h"
#include "WeaponFireOwner.h"
#include "SentryGun.generated.h"

class APlayerCharacter;
class AProjectile;
class UAudioComponent;
class UFXSystemAsset;
class UHealthComponentBase;
class USkeletalMeshComponent;
class USoundBase;
class USoundCue;
class UWeaponFireComponent;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API ASentryGun : public AActor, public IWeaponFireOwner, public IUpgradable {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnabledChanged, bool, IsEnabled);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnabledChanged OnEnabledChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAmmoCountChangedEvent OnAmmoCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAmmoCountChangedEvent OnMaxAmmoCountChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SentryGunMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSentryGunMuzzleSetup> SentryGunMuzzels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectile> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ShootingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* MuzzleFlash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTracerData TracerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* Tracer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTracerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOverlapResult> OverlapCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MinRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MaxRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AquisitionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShotCoolDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetLeading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BurstCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurstShotCoolDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleScanAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleScanSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinalShotFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* AudioOnTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DissallowedTargetTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AmmoCount, meta=(AllowPrivateAccess=true))
    int32 AmmoCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxAmmoCount, meta=(AllowPrivateAccess=true))
    int32 MaxAmmoCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float TargetYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float TargetPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, ReplicatedUsing=OnRep_LastTarget, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHealthComponentBase> LastTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHealthComponentBase> PrioritizedTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWeaponFireComponent* WeaponFire;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* ShootingAudioComponent;
    
public:
    ASentryGun(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UseAmmo(int32 Amount);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAmmoChanged(int32 Delta, int32 CurrentAmount);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxAmmoCount(int32 OldCount);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LastTarget();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AmmoCount(int32 OldCount);
    
    UFUNCTION(BlueprintCallable)
    void OnProjectileFired(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void OnNewTargetRequested(const FLaserPointerTarget& HitInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetMuzzleTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMuzzleName() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxAmmoCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetDeployProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAmmoLeftPct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmmoLeft() const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Force_Fire(AActor* Target);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AmmoSpent();
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    virtual APlayerCharacter* GetPlayerCharacter() const override PURE_VIRTUAL(GetPlayerCharacter, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual FQuat GetMuzzleQuat() const override PURE_VIRTUAL(GetMuzzleQuat, return FQuat{};);
    
    UFUNCTION(BlueprintCallable)
    virtual FVector GetMuzzleLocation() const override PURE_VIRTUAL(GetMuzzleLocation, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetIsLocallyControlled() const override PURE_VIRTUAL(GetIsLocallyControlled, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetIsFirstPerson() const override PURE_VIRTUAL(GetIsFirstPerson, return false;);
    
};

