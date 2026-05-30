#pragma once
#include "CoreMinimal.h"
#include "CharacterBuildData.h"
#include "RunHistoryCharacterData.generated.h"

USTRUCT(BlueprintType)
struct ROGUECORE_API FRunHistoryCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterBuildData> BuildData;
    
    FRunHistoryCharacterData();
};

