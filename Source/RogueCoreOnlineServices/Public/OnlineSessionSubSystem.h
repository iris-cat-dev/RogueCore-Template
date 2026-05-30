#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "EDisconnectReason.h"
#include "EFSDLoginState.h"
#include "EOnlineSessionStatus.h"
#include "EOnlineSessionType.h"
#include "SessionStatusChangeDelegateDelegate.h"
#include "OnlineSessionSubSystem.generated.h"

class UFSDSessionUpdater;

UCLASS(Blueprintable)
class ROGUECOREONLINESERVICES_API UOnlineSessionSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSessionStatusChangeDelegate OnSessionStatusChangeDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOnlineSessionType SessionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionPassword;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsJoiningInvite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool CanPlayOnline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EDisconnectReason DisconnectReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString DisconnectErrorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFSDSessionUpdater* SessionUpdater;
    
public:
    UOnlineSessionSubSystem();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetSessionPassword(const FString& Password);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideMaxPlayerCount(int32 count);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetOnlineSessionType(const EOnlineSessionType NewType);
    
    UFUNCTION(BlueprintCallable)
    void SetIsUsingOnlineFeatures(bool bIsOnlineFeatureUsed);
    
    UFUNCTION(BlueprintCallable)
    bool SetAllowNewPlayerJoin(bool isNewPlayersAllowed);
    
    UFUNCTION(BlueprintCallable)
    void OnLoginStateChanged(EFSDLoginState LoginStatus, const FString& LoginResult);
    
    UFUNCTION(BlueprintCallable)
    bool IsSessionJoinable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPendingInvitePasswordProtected();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInActiveSession(bool forDefaultSystem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingInvite() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOnlineSessionType GetSessionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOnlineSessionStatus GetSessionStatus(bool forDefaultSystem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOverrideMaxPlayerCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxPublicConnections() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDisconnectErrorCode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanPlayOnline() const;
    
    UFUNCTION(BlueprintCallable)
    void CloseSessionLobby();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearDisconnectError();
    
public:
    UFUNCTION(BlueprintCallable)
    void CancelJoin();
    
};

