#pragma once
#include "CoreMinimal.h"
#include "PawnAfflictionItem.generated.h"

class UAfflictionEffect;

USTRUCT(BlueprintType)
struct FPawnAfflictionItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAfflictionEffect*> Afflictions;
    
    ROGUECORE_API FPawnAfflictionItem();
};

