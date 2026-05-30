#pragma once
#include "CoreMinimal.h"
#include "XPDiscount.generated.h"

USTRUCT(BlueprintType)
struct FXPDiscount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FromLevel;
    
    ROGUECORE_API FXPDiscount();
};

