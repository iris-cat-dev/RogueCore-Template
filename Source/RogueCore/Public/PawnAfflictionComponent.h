#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AfflictionChangeDelegateDelegate.h"
#include "AfflictionEntriesArray.h"
#include "EFrozenBitsSize.h"
#include "IRandRange.h"
#include "PawnAfflictionItem.h"
#include "Templates/SubclassOf.h"
#include "PawnAfflictionComponent.generated.h"

class UAfflictionEffect;
class UBurningAfflictionEffect;
class UHealthComponentBase;
class UPawnAffliction;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPawnAfflictionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAfflictionChangeDelegate OnAfflictionActivatedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAfflictionChangeDelegate OnAfflictionDeactivatedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UPawnAffliction*, FPawnAfflictionItem> ActiveAfflictions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FAfflictionEntriesArray NetworkedAfflictions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAfflictionEffect> FrozenEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBurningAfflictionEffect> BurningEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFrozenBitsSize EffectSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRandRange FrozenBitsAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrozenBitsMinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseEffectScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDormancy;
    
public:
    UPawnAfflictionComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PushAffliction(UPawnAffliction* Affliction, bool onlyIfNotActive);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PopAffliction(UPawnAffliction* Affliction);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDeath(UHealthComponentBase* HealthComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAfflictedBy(UPawnAffliction* Affliction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPawnAffliction*> GetActiveAfflictions() const;
    
};

