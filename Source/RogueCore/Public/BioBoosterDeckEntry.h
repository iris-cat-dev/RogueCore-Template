#pragma once
#include "CoreMinimal.h"
#include "BioBoosterDeckEntry.generated.h"

class UBXEUnlockBase;

USTRUCT(BlueprintType)
struct FBioBoosterDeckEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBXEUnlockBase* Unlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnlocksAtLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnlockAtAscension;
    
    ROGUECORE_API FBioBoosterDeckEntry();
};

