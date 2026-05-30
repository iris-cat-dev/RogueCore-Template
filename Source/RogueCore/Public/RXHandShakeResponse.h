#pragma once
#include "CoreMinimal.h"
#include "RXHandShakeResponse.generated.h"

USTRUCT(BlueprintType)
struct FRXHandShakeResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString sid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString turi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString topic;
    
    ROGUECORE_API FRXHandShakeResponse();
};

