#pragma once
#include "CoreMinimal.h"
#include "ExampleStruct.generated.h"

USTRUCT(BlueprintType)
struct FExampleStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Field;
    
    ROGUECORE_API FExampleStruct();
};

