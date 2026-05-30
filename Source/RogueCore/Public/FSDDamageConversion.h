#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "DamageParams.h"
#include "FSDDamageConversion.generated.h"

class AActor;

UCLASS(Blueprintable)
class UFSDDamageConversion : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDDamageConversion();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDamageParams ConvertToDamageParam(const FHitResult& HitResult, AActor* DamageCauser);
    
};

