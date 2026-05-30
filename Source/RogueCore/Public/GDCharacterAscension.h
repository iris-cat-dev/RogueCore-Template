#pragma once
#include "CoreMinimal.h"
#include "GDCharacterAscension.generated.h"

USTRUCT(BlueprintType)
struct FGDCharacterAscension {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AscensionMeritCosts;
    
    ROGUECORE_API FGDCharacterAscension();
};

