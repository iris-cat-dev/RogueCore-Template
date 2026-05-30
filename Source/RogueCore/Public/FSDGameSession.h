#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "GameFramework/GameSession.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "FSDGameSession.generated.h"

UCLASS(Blueprintable)
class AFSDGameSession : public AGameSession {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> KickedPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> BannedPlayers;
    
public:
    AFSDGameSession(const FObjectInitializer& ObjectInitializer);

};

