#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RunTemplateStageSettings.generated.h"

class ADebrisDataActor;
class AProceduralSetup;
class UBiome;
class UDebrisActorComponent;
class UMissionDNA;
class UStageTemplate;

USTRUCT(BlueprintType)
struct FRunTemplateStageSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStageTemplate* ForcedTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AProceduralSetup> ForcedPLS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMissionDNA> ForcedDNA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBiome* ForcedBiome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ADebrisDataActor> DebrisActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UDebrisActorComponent>> DebrisComponents;
    
    ROGUECORE_API FRunTemplateStageSettings();
};

