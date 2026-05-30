#pragma once
#include "CoreMinimal.h"
#include "EFSDServerListFilterModdedType.h"
#include "EFSDServerListFilterProgressType.h"
#include "ERunDepth.h"
#include "EServerListFilterRunType.h"
#include "FSDServerListFilter.generated.h"

class UBiome;
class UPrimaryMutator;

USTRUCT(BlueprintType)
struct FFSDServerListFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFSDServerListFilterProgressType ProgressType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EServerListFilterRunType RunType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFSDServerListFilterModdedType ModType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunDepth RunDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RunLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RunComplexity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBiome* RunBiome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPrimaryMutator* RunMutator;
    
    ROGUECORE_API FFSDServerListFilter();
};

