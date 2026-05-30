#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockRecord.h"
#include "BXEPlayerData.generated.h"

USTRUCT(BlueprintType)
struct FBXEPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBXEUnlockRecord> UnlockRecords;
    
public:
    ROGUECORE_API FBXEPlayerData();
};

