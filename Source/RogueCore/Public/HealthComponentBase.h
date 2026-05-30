#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BodypartHitSigDelegate.h"
#include "DamageRelevant.h"
#include "DamageSigDelegate.h"
#include "DeathSigDelegate.h"
#include "EHealthbarType.h"
#include "Health.h"
#include "HealthChangedSigDelegate.h"
#include "HitSigDelegate.h"
#include "OnHitByHitScanDelegate.h"
#include "OnRadialDamageDelegate.h"
#include "HealthComponentBase.generated.h"

class AActor;
class UDamageClass;
class UFXSystemAsset;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHealthComponentBase : public UActorComponent, public IHealth, public IDamageRelevant {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCanTakeDamageDelegate, bool, OutCanTakeDamage);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealthChangedSig OnHealthChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageSig OnDamageHealed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageSig OnDamageTaken;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitSig OnHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBodypartHitSig OnBodypartHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathSig OnDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRadialDamage OnRadialDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHitByHitScan OnHitByHitScan;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCanTakeDamageDelegate OnCanTakeDamageChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FriendlyFireModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowLaserPointMarkerWhenDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool canTakeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PassthroughTemperatureDamage;
    
public:
    UHealthComponentBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TrySetCanTakeDamage(bool NewCanTakeDamage);
    
    UFUNCTION(BlueprintCallable)
    void TakeDamageSimple(float damageAmount, AActor* DamageCauser, int32 CritLevel, UDamageClass* DamageClass);
    
    UFUNCTION(BlueprintCallable)
    void SetHealthDirectly(float newHealthValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCanTakeDamageIsLocked(bool IsLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetCanTakeDamage(bool NewCanTakeDamage);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Kill(AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInvulnerable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    virtual bool IsDead() const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    virtual bool IsAlive() const override;
    
    UFUNCTION(BlueprintCallable)
    float Heal(float Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowHealthBar() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthPct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<IHealth> GetHealthComponentForCollider(UPrimitiveComponent* Primitive) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHealthBarWorldOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    virtual float GetHealth() const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFXSystemAsset* GetGenericImpactParticles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanTakeDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTakeDamageFrom(UDamageClass* DamageClass) const;
    

    virtual AActor* GetOwner() const override PURE_VIRTUAL(GetOwner, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetMaxHealth() const override PURE_VIRTUAL(GetMaxHealth, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual EHealthbarType GetHealthbarType() const override PURE_VIRTUAL(GetHealthbarType, return EHealthbarType::None;);
    
};

