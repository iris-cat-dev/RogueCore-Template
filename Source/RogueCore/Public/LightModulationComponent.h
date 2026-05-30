#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "LightModulationComponent.generated.h"

class UMaterialInstanceDynamic;
class UPointLightComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULightModulationComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve ModulationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhotoSensitiveMaterialModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhotoSensitiveLightModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AffectedByPhotosensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RandomStartTime;
    
public:
    ULightModulationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopModulation();
    
    UFUNCTION(BlueprintCallable)
    void StartModulation();
    
    UFUNCTION(BlueprintCallable)
    void SetLightCount(int32 lightCount);
    
    UFUNCTION(BlueprintCallable)
    void AddMaterial(UMaterialInstanceDynamic* Material, const FName& Param, float MaxIntensity);
    
    UFUNCTION(BlueprintCallable)
    void AddLight(UPointLightComponent* Light, float MaxIntensity);
    
};

