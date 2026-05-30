#pragma once
#include "CoreMinimal.h"
#include "ListenerEntry.generated.h"

class UActorComponent;

USTRUCT(BlueprintType)
struct FListenerEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UActorComponent* Component;
    
    ROGUECORE_API FListenerEntry();
};

