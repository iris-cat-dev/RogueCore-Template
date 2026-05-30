#pragma once
#include "CoreMinimal.h"
#include "ParsedCharacterBuildData.h"
#include "ParsedCharacterDamageData.h"
#include "ParsedRunHistoryCharacterData.generated.h"

USTRUCT(BlueprintType)
struct ROGUECORE_API FParsedRunHistoryCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParsedCharacterDamageData ParsedDamageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParsedCharacterBuildData ParsedBuildData;
    
    FParsedRunHistoryCharacterData();
};

