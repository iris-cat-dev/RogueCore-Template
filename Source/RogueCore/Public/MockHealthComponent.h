#pragma once
#include "CoreMinimal.h"
#include "HealthComponentBase.h"
#include "MockHealthComponent.generated.h"

class UDamageTag;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMockHealthComponent : public UHealthComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDamageTag*> TagsTaken;
    
    UMockHealthComponent(const FObjectInitializer& ObjectInitializer);

};

