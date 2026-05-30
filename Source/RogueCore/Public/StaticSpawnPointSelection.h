#pragma once
#include "CoreMinimal.h"
#include "EStaticSpawnPointGameplaySelection.h"
#include "EStaticSpawnPointSelectionType.h"
#include "StaticSpawnPointSelection.generated.h"

USTRUCT(BlueprintType)
struct FStaticSpawnPointSelection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStaticSpawnPointSelectionType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStaticSpawnPointGameplaySelection Gameplay;
    
    ROGUECORE_API FStaticSpawnPointSelection();
};

