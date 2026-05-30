#pragma once
#include "CoreMinimal.h"
#include "CSGOptions.h"
#include "MatrixWithExactSync.h"
#include "Templates/SubclassOf.h"
#include "CSGBuildOperationData.generated.h"

class ACSGBuilder;

USTRUCT(BlueprintType)
struct FCSGBuildOperationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OperationNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACSGBuilder> CSGModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCSGOptions CarverSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatrixWithExactSync Transform;
    
    ROGUECORE_API FCSGBuildOperationData();
};

