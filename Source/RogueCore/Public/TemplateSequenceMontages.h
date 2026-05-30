#pragma once
#include "CoreMinimal.h"
#include "TemplateSequenceMontages.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FTemplateSequenceMontages {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialStartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenPicksMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenPicksMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontagesToPick;
    
    ROGUECORE_API FTemplateSequenceMontages();
};

