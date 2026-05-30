#pragma once
#include "CoreMinimal.h"
#include "ObjectiveMissionIcon.h"
#include "GeneratedRunProperties.generated.h"

class UBiome;
class UMissionDNA;

USTRUCT(BlueprintType)
struct FGeneratedRunProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveMissionIcon RunIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveMissionIcon RunIconWithBlood;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBiome* RunBiome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionDNA* RunDNA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HazardBonus;
    
    ROGUECORE_API FGeneratedRunProperties();
};

