#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DeepPathFinderType.h"
#include "ECritterOutOfRangeBehaviour.h"
#include "BaseCritterDescriptor.generated.h"

class AFSDPawn;
class UBiome;
class UDebrisPositioning;

UCLASS(Abstract, Blueprintable)
class UBaseCritterDescriptor : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFSDPawn> CritterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UBiome*, TSoftClassPtr<AFSDPawn>> BiomeClassOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* Positioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DeepPathFinderType PathfinderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DestroyWhenOutOfRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECritterOutOfRangeBehaviour OutOfRanageBehaviour;
    
public:
    UBaseCritterDescriptor();

};

