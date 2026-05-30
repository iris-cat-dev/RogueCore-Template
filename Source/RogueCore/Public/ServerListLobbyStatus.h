#pragma once
#include "CoreMinimal.h"
#include "EServerListLobbyStatusType.h"
#include "ServerListLobbyStatus.generated.h"

class UIntelObjective;

USTRUCT(BlueprintType)
struct FServerListLobbyStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EServerListLobbyStatusType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIntelObjective* RequiredObjective;
    
    ROGUECORE_API FServerListLobbyStatus();
};

