#pragma once
#include "CoreMinimal.h"
#include "AnimSequenceArray.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FAnimSequenceArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> Anims;
    
    ROGUECORE_API FAnimSequenceArray();
};

