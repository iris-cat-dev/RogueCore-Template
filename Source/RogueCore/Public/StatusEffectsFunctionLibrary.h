#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Templates/SubclassOf.h"
#include "StatusEffectsFunctionLibrary.generated.h"

class AActor;
class UDamageClass;
class UStatusEffect;

UCLASS(Blueprintable)
class UStatusEffectsFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStatusEffectsFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMaxResistance(TSubclassOf<UStatusEffect> StatusEffect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDamageClass* GetDamageClass(TSubclassOf<UStatusEffect> StatusEffect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanTrigger(TSubclassOf<UStatusEffect> StatusEffect, AActor* OtherActor);
    
};

