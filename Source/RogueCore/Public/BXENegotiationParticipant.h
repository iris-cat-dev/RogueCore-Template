#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockInstance.h"
#include "ItemSlotIndex.h"
#include "BXENegotiationParticipant.generated.h"

class AFSDPlayerState;

USTRUCT(BlueprintType)
struct FBXENegotiationParticipant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFSDPlayerState> PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequestedIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemSlotIndex SelectedSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBXEUnlockInstance SelectedUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedDroneUnlockIndex;
    
    ROGUECORE_API FBXENegotiationParticipant();
};

