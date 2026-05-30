#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockInstance.h"
#include "ItemSlotIndex.h"
#include "UnlockableItemData.generated.h"

class UItemID;

USTRUCT(BlueprintType)
struct ROGUECORE_API FUnlockableItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemID* ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXEUnlockInstance Unlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemSlotIndex SelectedSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageIndex;
    
    FUnlockableItemData();
};

