#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockAnnouncement.generated.h"

USTRUCT(BlueprintType)
struct FBXEUnlockAnnouncement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    ROGUECORE_API FBXEUnlockAnnouncement();
};

