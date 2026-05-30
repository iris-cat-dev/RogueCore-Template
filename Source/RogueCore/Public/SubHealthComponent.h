#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DamageSigDelegate.h"
#include "EEnemyHealthScaling.h"
#include "EHealthbarType.h"
#include "Health.h"
#include "HealthChangedSigDelegate.h"
#include "SubHealthComponentDelegateDelegate.h"
#include "SubHealthComponent.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USubHealthComponent : public UActorComponent, public IHealth {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageSig OnDamageTaken;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealthChangedSig OnHealthChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubHealthComponentDelegate OnCanTakeDamageChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHealthbarType HealthbarType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool passthroughDamageWhenDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyHealthScaling EnemyHealthScaling;
    
public:
    USubHealthComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPassthroughDamageWhenDisabled(bool NewPassthroughDamageWhenDisabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCanTakeDamage(bool canTakeDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    virtual bool IsDead() const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    virtual bool IsAlive() const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthPct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    virtual float GetHealth() const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanTakeDamage() const;
    


    virtual AActor* GetOwner() const override PURE_VIRTUAL(GetOwner, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetMaxHealth() const override PURE_VIRTUAL(GetMaxHealth, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual EHealthbarType GetHealthbarType() const override PURE_VIRTUAL(GetHealthbarType, return EHealthbarType::None;);
    
};

