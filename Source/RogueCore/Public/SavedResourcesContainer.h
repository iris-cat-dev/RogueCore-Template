#pragma once
#include "CoreMinimal.h"
#include "SavedResourceAmount.h"
#include "SavedResourcesContainer.generated.h"

USTRUCT(BlueprintType)
struct FSavedResourcesContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedResourceAmount> OwnedResources;
    
public:
    ROGUECORE_API FSavedResourcesContainer();
};

