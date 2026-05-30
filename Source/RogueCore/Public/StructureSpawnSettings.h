#pragma once
#include "CoreMinimal.h"
#include "ConstructionItem.h"
#include "StructureSpawnSettings.generated.h"

USTRUCT(BlueprintType)
struct FStructureSpawnSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinAmountOfStructuresPerRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAmountOfStructuresPerRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConstructionItem> Structures;
    
    ROGUECORE_API FStructureSpawnSettings();
};

