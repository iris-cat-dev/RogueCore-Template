#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MockDamageListener.generated.h"

UCLASS(Blueprintable)
class UMockDamageListener : public UObject {
    GENERATED_BODY()
public:
    UMockDamageListener();

    UFUNCTION(BlueprintCallable)
    void RadialDamageTaken(float Damage, float BaseDamage, const FVector& position, float Radius);
    
};

