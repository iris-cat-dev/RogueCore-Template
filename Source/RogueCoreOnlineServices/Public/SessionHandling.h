#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "FSDBlueprintSessionResult.h"
#include "FriendInfo.h"
#include "SessionHandling.generated.h"

class UObject;

UCLASS(Blueprintable)
class ROGUECOREONLINESERVICES_API USessionHandling : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USessionHandling();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopVoice(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartVoice(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool StartSearchForBlockedUsers(int32 localUserNum);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowInviteUI(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInActiveSession(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FString GetVoiceStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FText GetSessionJoinError(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetFriendsList(int32 localUserNum, TArray<FFriendInfo>& Players);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCurrentSessionState(FString& sessionState, FString& ID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool FSDUpdateSessionInfo(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FSDIsSessionValid(const FFSDBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FSDIsPasswordRequired(const FFSDBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString FSDGetServerID(const FFSDBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool FSDCancelFindSessions(UObject* WorldContextObject);
    
};

