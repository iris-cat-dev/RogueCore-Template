#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PlaceParametersSimple.h"
#include "ShieldPlacement.h"
#include "ThrowParameters.h"
#include "ThrowParametersSimple.h"
#include "ThrowLibrary.generated.h"

class AActor;
class APlacementDeviceActor;
class AThrowableActor;

UCLASS(Blueprintable)
class UThrowLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UThrowLibrary();

    UFUNCTION(BlueprintCallable)
    static AThrowableActor* ThrowActorSimple(const FThrowParametersSimple& ThrowParameters);
    
    UFUNCTION(BlueprintCallable)
    static AThrowableActor* ThrowActor(const FThrowParameters& ThrowParameters);
    
    UFUNCTION(BlueprintCallable)
    static APlacementDeviceActor* PlaceDevice(const FPlaceParametersSimple& PlaceParameters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FShieldPlacement ComputeSmoothShieldPlacement(const AActor* ShieldedActor, const float ShieldDistanceToActor, const AActor* Shield, const float DeltaSeconds, const float RotationInterpolationSpeed, const float LocationInterpolationSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FShieldPlacement ComputeShieldPlacement(const AActor* ShieldedActor, const float ShieldDistanceToActor);
    
};

