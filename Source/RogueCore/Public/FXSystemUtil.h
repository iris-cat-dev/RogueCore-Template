#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAttachLocation -FallbackName=EAttachLocation
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=ENCPoolMethod -FallbackName=ENCPoolMethod
#include "FXSystemUtil.generated.h"

class UFXSystemAsset;
class UFXSystemComponent;
class UObject;
class USceneComponent;

UCLASS(Blueprintable)
class ROGUECORE_API UFXSystemUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFXSystemUtil();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFXSystemComponent* SpawnFXSystemAtLocation(const UObject* WorldContextObject, UFXSystemAsset* FXSystem, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
    
    UFUNCTION(BlueprintCallable)
    static UFXSystemComponent* SpawnFirstPersonEmitterAttached(UFXSystemAsset* FXSystem, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool inAutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    static bool IsFXSystemAsset(const UFXSystemComponent* FXComp, const UFXSystemAsset* FXAsset);
    
};

