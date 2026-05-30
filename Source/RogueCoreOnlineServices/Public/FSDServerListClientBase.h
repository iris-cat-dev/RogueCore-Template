#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "EFSDServerListHostMode.h"
#include "EOnlineSessionStatus.h"
#include "ServerListLobbyRaw.h"
#include "FSDServerListClientBase.generated.h"

class UOnlineSessionSubSystem;

UCLASS(Abstract, Blueprintable)
class ROGUECOREONLINESERVICES_API UFSDServerListClientBase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGetLobbiesResult, bool, success);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid LobbyGuid;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetLobbiesResult ListDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UOnlineSessionSubSystem* OnlineSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FServerListLobbyRaw LatestUploadedLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFSDServerListHostMode CurrentHostMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFSDServerListHostMode NextHostMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid CurrentRunId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid NextRunId;
    
public:
    UFSDServerListClientBase();

    UFUNCTION(BlueprintCallable)
    void StopHosting();
    
    UFUNCTION(BlueprintCallable)
    void StartHosting(const EFSDServerListHostMode Mode, const FGuid RunId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOnlineSessionChanged(const EOnlineSessionStatus OldStatus, const EOnlineSessionStatus NewStatus);
    
public:
    UFUNCTION(BlueprintCallable)
    void ListLobbies();
    
    UFUNCTION(BlueprintCallable)
    bool IsMySession(const FString& InSessionId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HaveServerFilter() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFSDServerListHostMode GetHostMode() const;
    
};

