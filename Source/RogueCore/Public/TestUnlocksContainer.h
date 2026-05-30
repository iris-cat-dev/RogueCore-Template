#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockInstance.h"
#include "TestUnlocksContainer.generated.h"

USTRUCT(BlueprintType)
struct FTestUnlocksContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBXEUnlockInstance> UnlockInstances;
    
    ROGUECORE_API FTestUnlocksContainer();
};

