#pragma once
#include "CoreMinimal.h"
#include "ServerListLobbyRaw.h"
#include "ServerListResponse.generated.h"

USTRUCT(BlueprintType)
struct FServerListResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FServerListLobbyRaw> Lobbies;
    
    ROGUECOREONLINESERVICES_API FServerListResponse();
};

