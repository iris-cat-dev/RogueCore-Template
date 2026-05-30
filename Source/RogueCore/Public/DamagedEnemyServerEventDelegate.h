#pragma once
#include "CoreMinimal.h"
#include "DamagedEnemyServerEventDelegate.generated.h"

class IHealth;
class UHealth;
class UDamageClass;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_EightParams(FDamagedEnemyServerEvent, const TScriptInterface<IHealth>&, EnemyHealth, float, Damage, float, DamageModifier, float, HealthRemaining, bool, IsWeakPoint, bool, IsRadial, UDamageClass*, DamageClass, bool, isCrit);

