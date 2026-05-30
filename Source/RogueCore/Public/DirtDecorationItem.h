#pragma once
#include "CoreMinimal.h"
#include "DirtDecorationItem.generated.h"

class ADirtDecoration;

USTRUCT(BlueprintType)
struct FDirtDecorationItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ADirtDecoration> DirtDecoration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnWeight;
    
    ROGUECORE_API FDirtDecorationItem();
};

