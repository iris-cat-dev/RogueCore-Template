#pragma once
#include "CoreMinimal.h"
#include "EnhancementSlotUnlockRequirement.h"
#include "EnhancementSettings.generated.h"

USTRUCT(BlueprintType)
struct FEnhancementSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnhancementSlotUnlockRequirement> SlotUnlockRequirements;
    
    ROGUECORE_API FEnhancementSettings();
};

