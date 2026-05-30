#pragma once
#include "CoreMinimal.h"
#include "ActorDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActorDelegate, AActor*, actorValue);

