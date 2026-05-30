#pragma once
#include "CoreMinimal.h"
#include "LookupSessionResponse.generated.h"

USTRUCT(BlueprintType)
struct FLookupSessionResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Valid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LobbyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString P2PADDR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 P2PPORT;
    
    ROGUECOREONLINESERVICES_API FLookupSessionResponse();
};

