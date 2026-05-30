#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "FSDMath.generated.h"

class AActor;

UCLASS(Blueprintable)
class UFSDMath : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDMath();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector SphericalToCartesian(float Radius, float Azimuth, float elecation);
    
    UFUNCTION(BlueprintCallable)
    static float SignedAngleBetweenVectors(const FVector& v1, const FVector& v2, const FVector& vAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float RoundToDecimalPlace(float Number, int32 decimalPlaces);
    
    UFUNCTION(BlueprintCallable)
    static void RotateActorAroundOffset(AActor* Actor, FVector localSpaceOffset, FRotator Rotator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool PercentageCheck(float percentage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAzimuthAndElevation(const FVector& Direction, const FTransform& CoordinateSystem, float& Azimuth, float& Elevation);
    
    UFUNCTION(BlueprintCallable)
    static float CubicSegmentLength(FVector p0, FVector tangent1, FVector P1, FVector tangent2);
    
    UFUNCTION(BlueprintCallable)
    static FVector CubicInterpBlueprint(FVector p0, FVector tangent1, FVector P1, FVector tangent2, float alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ClampVectorToCone(FVector ToConstrain, FVector ConeDirection, float ConeAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CartesianToSpherical(FVector Location, float& outAzimuth, float& outElevation, float& OutRadius);
    
    UFUNCTION(BlueprintCallable)
    static float AngleBetweenDirections(const FVector& v1, const FVector& v2);
    
};

