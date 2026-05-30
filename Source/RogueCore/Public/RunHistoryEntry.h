#pragma once
#include "CoreMinimal.h"
#include "RunHistoryCharacterData.h"
#include "RunHistoryDamageData.h"
#include "RunHistoryRunInfo.h"
#include "SharedRunData.h"
#include "UnlockableTypeData.h"
#include "RunHistoryEntry.generated.h"

USTRUCT(BlueprintType)
struct ROGUECORE_API FRunHistoryEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSharedRunData SharedInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRunHistoryRunInfo RunInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRunHistoryCharacterData Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRunHistoryDamageData DamageCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnlockableTypeData> CooperUpgrades;
    
    FRunHistoryEntry();
};

