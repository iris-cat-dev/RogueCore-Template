#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix -FallbackName=Matrix
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "DeepPathFinderSize.h"
#include "DeepPathFinderType.h"
#include "ESpecialDebrisType.h"
#include "TerrainFunctionLibrary.generated.h"

class UObject;
class UTerrainMaterial;

UCLASS(Blueprintable)
class UTerrainFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTerrainFunctionLibrary();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetDebrisTransformsInSphere(UObject* WorldContextObject, TArray<FMatrix>& outPositions, const FVector& Location, const float& Radius, const ESpecialDebrisType& debrisType, float minDistToOther, bool calcPriority);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FVector> GetAllNavPointsInSphere(UObject* WorldContextObject, FVector Origin, float Radius, DeepPathFinderSize pfSize, const FVector searchNormal, float maxDegreesToSearchNormal);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FVector> FindPath(UObject* WorldContextObject, FVector Origin, FVector Destination, DeepPathFinderSize pfSize, DeepPathFinderType pfType);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FindNearestSurfacePoint(UObject* WorldContextObject, FVector InPoint, FVector& outPoint, FVector& Normal, bool& IsBlocked);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FindNearestSurfaceNormal(UObject* WorldContextObject, FVector InPoint, FVector& Normal);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool DoesPathExist(UObject* WorldContextObject, FVector Origin, FVector Destination, DeepPathFinderSize pfSize, DeepPathFinderType pfType);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CreateExplosionCrater2(UObject* WorldContextObject, FVector Location, float CarveDiameter, float carveNoiseSize, float carveBurnThickness, FVector Normal, float NormalOffset, float NormalSqueeze, bool allowCustomBurntMaterial, bool DissolvePlatforms, UTerrainMaterial* overrideBurnedMaterial);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CreateExplosionCrater(UObject* WorldContextObject, FVector Location, float CarveDiameter, float carveNoiseSize, float carveBurnThickness, bool allowCustomBurntMaterial, UTerrainMaterial* overrideBurnedMaterial);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 CountDebrisOfType(UObject* WorldContextObject, ESpecialDebrisType debrisType);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 CountDebrisInSphere(UObject* WorldContextObject, FVector Location, float Radius, ESpecialDebrisType debrisType);
    
};

