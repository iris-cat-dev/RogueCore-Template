#pragma once
#include "CoreMinimal.h"
#include "GeneratorLine.h"
#include "FacilityGeneratorLine.generated.h"

class ATetherStation;

UCLASS(Blueprintable)
class AFacilityGeneratorLine : public AGeneratorLine {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATetherStation* Station;
    
public:
    AFacilityGeneratorLine(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveBeginPathFinding();
    
};

