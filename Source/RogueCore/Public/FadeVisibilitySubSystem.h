#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "FadeVisibilitySubSystem.generated.h"

class ULightComponent;
class UMeshComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UFadeVisibilitySubSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UFadeVisibilitySubSystem();

    UFUNCTION(BlueprintCallable)
    static void ScalePrimitive(const UPrimitiveComponent* Component, FVector StartScale, FVector EndScale, float duration);
    
    UFUNCTION(BlueprintCallable)
    static void ScaleOutPrimitive(const UPrimitiveComponent* Component, float duration);
    
    UFUNCTION(BlueprintCallable)
    static void ScaleInPrimitive(const UPrimitiveComponent* Component, float duration);
    
    UFUNCTION(BlueprintCallable)
    static void FadeOutMaterialByName(const UMeshComponent* Component, FName Name, FName ParameterName, float duration);
    
    UFUNCTION(BlueprintCallable)
    static void FadeOutMaterialByIndex(const UMeshComponent* Component, int32 MaterialIndex, FName ParameterName, float duration);
    
    UFUNCTION(BlueprintCallable)
    static void FadeOutLight(const ULightComponent* Light, float duration);
    
    UFUNCTION(BlueprintCallable)
    static void FadeLightToIntensity(ULightComponent* Light, float duration, float endIntensity);
    
    UFUNCTION(BlueprintCallable)
    static void FadeLightByCurve(const ULightComponent* Light, UPARAM(Ref) FRuntimeFloatCurve& Curve);
    
    UFUNCTION(BlueprintCallable)
    static void FadeInMaterialByName(const UMeshComponent* Component, FName Name, FName ParameterName, float duration);
    
    UFUNCTION(BlueprintCallable)
    static void FadeInMaterialByIndex(const UMeshComponent* Component, int32 MaterialIndex, FName ParameterName, float duration);
    
    UFUNCTION(BlueprintCallable)
    static void FadeInLight(const ULightComponent* Light, float duration);
    
};

