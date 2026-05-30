#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PlagueCleaning.generated.h"

class UInfectionPointCleaningComponent;

UINTERFACE(Blueprintable)
class UPlagueCleaning : public UInterface {
    GENERATED_BODY()
};

class IPlagueCleaning : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UInfectionPointCleaningComponent* GetCleaningPoints(FVector fromLocation);
    
};

