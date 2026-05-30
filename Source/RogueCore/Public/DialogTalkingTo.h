#pragma once
#include "CoreMinimal.h"
#include "ECharacterGender.h"
#include "DialogTalkingTo.generated.h"

USTRUCT(BlueprintType)
struct FDialogTalkingTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterGender GroupGender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupSize;
    
    ROGUECORE_API FDialogTalkingTo();
};

