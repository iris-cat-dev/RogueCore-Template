#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "DecalData.h"
#include "ScaledEffect.h"
#include "FSDGameplayStatics.generated.h"

class AActor;
class UAudioComponent;
class UDecalComponent;
class UFXSystemComponent;
class UMaterialInterface;
class UObject;

UCLASS(Blueprintable)
class UFSDGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDGameplayStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFXSystemComponent* SpawnScaledEmitterAtLocation(UObject* WorldContextObject, FScaledEffect ScaledEffect, FVector Location, FRotator Rotation, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDecalComponent* SpawnDecalData(const UObject* WorldContextObject, const FVector& Location, const FVector& UpVector, const FDecalData& DecalData, bool randomRollRotation);
    
    UFUNCTION(BlueprintCallable)
    static UDecalComponent* SpawnDecalAtActor(AActor* Actor, UMaterialInterface* DecalMaterial, float Size, float duration, float FadeDuration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDecalComponent* SpawnDecal(const UObject* WorldContextObject, UMaterialInterface* DecalMaterial, const FVector& Location, const FVector& UpVector, float Size, float duration, float FadeDuration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetControllerVibrationSubmixSend(const UObject* WorldContextObject, UAudioComponent* AudioComponent, float SendLevel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetControllerSpeakerSubmixSend(const UObject* WorldContextObject, UAudioComponent* AudioComponent, float SendLevel);
    
};

