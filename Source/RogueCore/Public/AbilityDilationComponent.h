#pragma once
#include "CoreMinimal.h"
#include "AbilityComponent.h"
#include "AbilityDilationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAbilityDilationComponent : public UAbilityComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDilation;
    
public:
    UAbilityDilationComponent(const FObjectInitializer& ObjectInitializer);

};

