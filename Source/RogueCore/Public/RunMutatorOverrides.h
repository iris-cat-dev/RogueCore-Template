#pragma once
#include "CoreMinimal.h"
#include "ERunItemOverrideType.h"
#include "ERunListOverrideType.h"
#include "RunMutatorOverrides.generated.h"

class UMutator;
class UPrimaryMutator;
class URiskVector;

USTRUCT(BlueprintType)
struct FRunMutatorOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunItemOverrideType PrimaryMutatorOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPrimaryMutator* PrimaryMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunListOverrideType SecondaryMutatorsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMutator*> SecondaryMutators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunListOverrideType RiskVectorsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URiskVector*> RiskVectors;
    
    ROGUECORE_API FRunMutatorOverrides();
};

