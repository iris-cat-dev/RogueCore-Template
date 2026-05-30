#pragma once
#include "CoreMinimal.h"
#include "PerkArray.generated.h"

class UPerkAsset;

USTRUCT(BlueprintType)
struct FPerkArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPerkAsset*> Perks;
    
    ROGUECORE_API FPerkArray();
};

