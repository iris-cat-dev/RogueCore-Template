#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "DamageData.h"
#include "DamageListenerData.h"
#include "DamageFunctionLibrary.generated.h"

class AActor;
class AItem;
class UDamageClass;
class UDamageImpulse;
class UDamageTag;
class UFSDPhysicalMaterial;
class ULimbDismembermentList;
class UObject;
class UPawnStatsComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class UDamageFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDamageFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetPhysicalMaterialOnHit(UFSDPhysicalMaterial* PhysMat, UPARAM(Ref) FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGibbedDeath(const TArray<UDamageTag*>& Tags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsExplosiveDeath(UObject* WorldContext, UPawnStatsComponent* PawnStats, const TArray<UDamageTag*>& Tags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCorrosiveDeath(UDamageClass* DamageClass, const TArray<UDamageTag*>& Tags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCookedDeath(const TArray<UDamageTag*>& Tags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsBurnDeath(UDamageClass* DamageClass, const TArray<UDamageTag*>& Tags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetForceFromDamageImpulse(const AActor* Target, const FDamageData& DamageData);
    
    UFUNCTION(BlueprintCallable)
    static UDamageImpulse* GetDamageImpulse(const FDamageData& DamageData);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindClosestBoneIndex(const USkeletalMeshComponent* mesh, const FVector& Location, ULimbDismembermentList* dismembermentList, float MaxDistance);
    
    UFUNCTION(BlueprintCallable)
    static FName FindClosestBone(const USkeletalMeshComponent* mesh, const FVector& Location, ULimbDismembermentList* dismembermentList, float MaxDistance);
    
    UFUNCTION(BlueprintCallable)
    static AItem* FindCharacterOwnedItem(AActor* InDamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AnyListenerDataHasDamageTypes(const TArray<FDamageListenerData>& Data, const TArray<UDamageClass*>& DamageClasses);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AllListenerDataAreDamageTypes(const TArray<FDamageListenerData>& Data, const TArray<UDamageClass*>& DamageClasses);
    
};

