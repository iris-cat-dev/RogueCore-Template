#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "AsyncRadialData.h"
#include "DamageInstance.h"
#include "DamageParams.h"
#include "PrefetchedData.h"
#include "BXEDamageSubsystem.generated.h"

class AActor;
class UDamageAsset;
class UObject;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API UBXEDamageSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAsyncRadialData> AsyncData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CriticalDamageMultiplier;
    
public:
    UBXEDamageSubsystem();

    UFUNCTION(BlueprintCallable)
    static FPrefetchedData PrefetchDamageCondition(AActor* FromActor, const TArray<FDamageInstance>& DamageInstance);
    
    UFUNCTION(BlueprintCallable)
    float Local_DamageTargetWithInstances(const TArray<FDamageInstance>& damageInstances, const FDamageParams& Params);
    
    UFUNCTION(BlueprintCallable)
    float Local_DamageTargetWithInstance(const FDamageInstance& DamageInstance, const FDamageParams& Params);
    
    UFUNCTION(BlueprintCallable)
    float Local_DamageTarget(UDamageAsset* DamageAsset, const FDamageParams& Params, FPrefetchedData prefetchedResults);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    static float DamageTargetWithInstances(UObject* WorldContext, const TArray<FDamageInstance>& Instances, const FDamageParams& Params, FPrefetchedData prefetchedResults);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    static float DamageTargetWithInstance(UObject* WorldContext, const FDamageInstance& instance, const FDamageParams& Params, FPrefetchedData prefetchedResults);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContext"))
    static float DamageTarget(UObject* WorldContext, UDamageAsset* DamageAsset, const FDamageParams& Params, FPrefetchedData prefetchedResults);
    
};

