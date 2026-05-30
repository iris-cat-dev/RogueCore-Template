#pragma once
#include "CoreMinimal.h"
#include "GeneratedRunForBiome.h"
#include "GeneratedRunsForBiome.generated.h"

class UBiome;
class UPlanetZone;

USTRUCT(BlueprintType)
struct FGeneratedRunsForBiome {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBiome* Biome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlanetZone* PlanetZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGeneratedRunForBiome> Runs;
    
    ROGUECORE_API FGeneratedRunsForBiome();
};

