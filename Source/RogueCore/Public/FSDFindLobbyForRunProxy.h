#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "ServerListLobby.h"
#include "FSDFindLobbyForRunProxy.generated.h"

class UFSDFindLobbyForRunProxy;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UFSDFindLobbyForRunProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFindLobbyProxyLobbyDelegate, const FServerListLobby&, Lobby);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFindLobbyProxyFailureDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFindLobbyProxyLobbyDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFindLobbyProxyFailureDelegate OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFindLobbyProxyFailureDelegate OnNotFound;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid RunId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FServerListLobby RunLobby;
    
public:
    UFSDFindLobbyForRunProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UFSDFindLobbyForRunProxy* FindLobbyForRun(const UObject* WorldContext, const FGuid NewRunId);
    
};

