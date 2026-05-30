#pragma once
#include "CoreMinimal.h"
#include "SavedResourcesContainer.h"
#include "ResourcesSave.generated.h"

USTRUCT(BlueprintType)
struct FResourcesSave {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedResourcesContainer OwnedResources;
    
public:
    ROGUECORE_API FResourcesSave();
};

