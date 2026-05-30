#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockInstance.h"
#include "ItemSlotIndex.h"
#include "BXEUnlockRecord.generated.h"

USTRUCT(BlueprintType)
struct FBXEUnlockRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXEUnlockInstance UnlockInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemSlotIndex Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bAppliedToPlayer;
    
    ROGUECORE_API FBXEUnlockRecord();
};

