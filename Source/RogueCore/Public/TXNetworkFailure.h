#pragma once
#include "CoreMinimal.h"
#include "TXNetworkFailure.generated.h"

USTRUCT(BlueprintType)
struct FTXNetworkFailure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString error_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString error_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_host;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float connection_duration;
    
    ROGUECORE_API FTXNetworkFailure();
};

