#pragma once
#include "CoreMinimal.h"
#include "EnemyStaggeredServerDelegate.generated.h"

class ADeepPathfinderCharacter;
class APlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEnemyStaggeredServer, APlayerCharacter*, Causer, ADeepPathfinderCharacter*, Enemy);

