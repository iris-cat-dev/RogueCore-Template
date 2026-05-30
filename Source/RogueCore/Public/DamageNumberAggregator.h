#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "DamageListener.h"
#include "DamageNumberReplicationData.h"
#include "DamageNumberAggregator.generated.h"

class AActor;
class UDamageClass;
class UFSDPhysicalMaterial;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UDamageNumberAggregator : public UActorComponent, public IDamageListener {
    GENERATED_BODY()
public:
    UDamageNumberAggregator(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_ShowHealthDamageNumber_Single(float Damage, UDamageClass* DamageType, bool Radial, bool isDamageOverTime, AActor* DamageCauser, UFSDPhysicalMaterial* PhysicalMaterial, int32 OverriddenCritLevel, FVector_NetQuantize Location, AActor* Target);
    
public:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_ShowDamageNumber(const FDamageNumberReplicationData& Data);
    
private:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_ShowArmorDamageNumber_Single(float Damage, UDamageClass* DamageType, bool Radial, AActor* DamageCauser, UFSDPhysicalMaterial* PhysicalMaterial, int32 OverriddenCritLevel, FVector_NetQuantize Location, AActor* Target);
    

    // Fix for true pure virtual functions not being implemented
};

