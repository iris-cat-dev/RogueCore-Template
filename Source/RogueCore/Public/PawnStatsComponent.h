#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "DamageRelevant.h"
#include "PawnStatEntriesArray.h"
#include "PawnStatsComponent.generated.h"

class UPawnStat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPawnStatsComponent : public UActorComponent, public IDamageRelevant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=Onrep_Stats, meta=(AllowPrivateAccess=true))
    FPawnStatEntriesArray Stats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDormancy;
    
public:
    UPawnStatsComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveModifier(UPawnStat* Stat, float Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Onrep_Stats(const FPawnStatEntriesArray& oldStats);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStatValue(const UPawnStat* Stat) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ChangeModifier(UPawnStat* Stat, float CurrentValue, float NewValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 AddModifier(UPawnStat* Stat, float Value);
    

    // Fix for true pure virtual functions not being implemented
};

