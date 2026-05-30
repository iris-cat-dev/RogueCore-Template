#pragma once
#include "CoreMinimal.h"
#include "ResourcePouchItem.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FResourcePouchItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UResourceData* Resource;
    
    ROGUECORE_API FResourcePouchItem();
};

