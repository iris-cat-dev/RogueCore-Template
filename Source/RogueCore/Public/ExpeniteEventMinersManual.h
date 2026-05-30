#pragma once
#include "CoreMinimal.h"
#include "ManualStepDescription.h"
#include "Templates/SubclassOf.h"
#include "ExpeniteEventMinersManual.generated.h"

class UBXEBlueprintControlledObjective;
class UTexture2D;

USTRUCT(BlueprintType)
struct FExpeniteEventMinersManual {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBXEBlueprintControlledObjective> Objective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ObjectiveButtonImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FManualStepDescription StepDescriptions;
    
    ROGUECORE_API FExpeniteEventMinersManual();
};

