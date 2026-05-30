#pragma once
#include "CoreMinimal.h"
#include "BuildableDamageEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FBuildableDamageEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Target;
    
    ROGUECORE_API FBuildableDamageEntry();
};

