#pragma once
#include "CoreMinimal.h"
#include "ECharacterGender.h"
#include "TextTalkingTo.generated.h"

USTRUCT(BlueprintType)
struct FTextTalkingTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterGender GroupGender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupSize;
    
    ROGUECORE_API FTextTalkingTo();
};

