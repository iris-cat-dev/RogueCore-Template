#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VanityTestCharacterItem.generated.h"

class USkeletalMesh;
class UVanityAnimInstance;

USTRUCT(BlueprintType)
struct FVanityTestCharacterItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVanityAnimInstance> AnimBP;
    
    ROGUECORE_API FVanityTestCharacterItem();
};

