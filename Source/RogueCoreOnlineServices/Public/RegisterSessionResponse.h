#pragma once
#include "CoreMinimal.h"
#include "RegisterSessionResponse.generated.h"

USTRUCT(BlueprintType)
struct FRegisterSessionResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionKey;
    
    ROGUECOREONLINESERVICES_API FRegisterSessionResponse();
};

