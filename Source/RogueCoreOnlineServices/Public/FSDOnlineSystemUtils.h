#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EBlueprintablePrivilegeResults.h"
#include "EBlueprintableUserPrivileges.h"
#include "EInviteBlockReason.h"
#include "EPlatformBranch.h"
#include "OnGetIsUpdatePendingBPDelegate.h"
#include "OnGetUserPrivilegeCompleteBPDelegateDelegate.h"
#include "OnProfileUIClosedBPDelegate.h"
#include "OnShowWebUrlClosedBPDelegate.h"
#include "FSDOnlineSystemUtils.generated.h"

class APlayerState;
class UObject;

UCLASS(Blueprintable)
class ROGUECOREONLINESERVICES_API UFSDOnlineSystemUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDOnlineSystemUtils();

    UFUNCTION(BlueprintCallable)
    static void TryToResolvePrivilege(const APlayerState* PlayerState, EBlueprintableUserPrivileges Privilege, EBlueprintablePrivilegeResults Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ShowUpgradeAccountUI();
    
    UFUNCTION(BlueprintCallable)
    static void OpenURLInOverlay(const FString& URL, FOnShowWebUrlClosedBP OnOverlayClosed);
    
    UFUNCTION(BlueprintCallable)
    static void OpenProfileWithEvent(APlayerState* Requestor, APlayerState* Requestee, FOnProfileUIClosedBP OnProfileWindowClosed);
    
    UFUNCTION(BlueprintCallable)
    static void OpenProfileByUserId(APlayerState* Requestor, const FString& RequesteeUserID);
    
    UFUNCTION(BlueprintCallable)
    static void OpenProfile(APlayerState* Requestor, APlayerState* Requestee);
    
    UFUNCTION(BlueprintCallable)
    static void OpenPlatformBrowser(const FString& URL);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText OnlinePlayBlockReasonToString(EBlueprintablePrivilegeResults Reason);
    
    UFUNCTION(BlueprintCallable)
    static FString GetPlatformBranchName();
    
    UFUNCTION(BlueprintCallable)
    static EPlatformBranch GetPlatformBranch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetOnlinePlayBlockReasons(TArray<EBlueprintablePrivilegeResults>& reasons);
    
    UFUNCTION(BlueprintCallable)
    static void GetIsUpdatePending(const FOnGetIsUpdatePendingBP& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void GetIsPrivilegeAllowed(const APlayerState* PlayerState, EBlueprintableUserPrivileges Privilege, const FOnGetUserPrivilegeCompleteBPDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetInviteFeatureBlockReason(UObject* WorldContextObject, EInviteBlockReason Reason);
    
    UFUNCTION(BlueprintCallable)
    static FString GetAppID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EInviteBlockReason CanPlayerInvite(UObject* WorldContextObject);
    
};

