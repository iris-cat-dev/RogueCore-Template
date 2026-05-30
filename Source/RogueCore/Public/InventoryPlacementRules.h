#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EUnlockType.h"
#include "ItemSlotIndex.h"
#include "InventoryPlacementRules.generated.h"

class APlayerCharacter;

UCLASS(Blueprintable)
class ROGUECORE_API UInventoryPlacementRules : public UObject {
    GENERATED_BODY()
public:
    UInventoryPlacementRules();

    UFUNCTION(BlueprintCallable)
    static TArray<FItemSlotIndex> GetPlaceableUnlockSlotsFromType(APlayerCharacter* Player, EUnlockType Type, bool& IsFreeSlots);
    
};

