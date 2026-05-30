#pragma once
#include "CoreMinimal.h"
#include "AvoidActorEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAvoidActorEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    ROGUECORE_API FAvoidActorEntry();
};

