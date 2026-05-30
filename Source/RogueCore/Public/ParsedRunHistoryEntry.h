#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockInstance.h"
#include "ParsedRunHistoryCharacterData.h"
#include "ParsedRunHistoryRunInfo.h"
#include "SharedRunData.h"
#include "ParsedRunHistoryEntry.generated.h"

USTRUCT(BlueprintType)
struct ROGUECORE_API FParsedRunHistoryEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParsedRunHistoryRunInfo RunInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSharedRunData SharedInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FParsedRunHistoryCharacterData> Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBXEUnlockInstance> CooperUpgrades;
    
    FParsedRunHistoryEntry();
};

