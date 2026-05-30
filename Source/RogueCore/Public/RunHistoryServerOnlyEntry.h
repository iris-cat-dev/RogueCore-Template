#pragma once
#include "CoreMinimal.h"
#include "CharacterServerBuildData.h"
#include "RunHistoryDamageData.h"
#include "RunHistoryServerOnlyEntry.generated.h"

USTRUCT(BlueprintType)
struct ROGUECORE_API FRunHistoryServerOnlyEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRunHistoryDamageData DamageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterServerBuildData> ServerBuildData;
    
    FRunHistoryServerOnlyEntry();
};

