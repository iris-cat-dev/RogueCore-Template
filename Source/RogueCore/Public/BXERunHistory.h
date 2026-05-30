#pragma once
#include "CoreMinimal.h"
#include "RunHistoryEntry.h"
#include "BXERunHistory.generated.h"

USTRUCT(BlueprintType)
struct FBXERunHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRunHistoryEntry> Entries;
    
    ROGUECORE_API FBXERunHistory();
};

