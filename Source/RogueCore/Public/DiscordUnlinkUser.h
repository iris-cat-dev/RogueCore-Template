#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DiscordOnUnlinkUserDelegate.h"
#include "DiscordUnlinkUser.generated.h"

class UDiscordUnlinkUser;
class UObject;

UCLASS(Blueprintable)
class UDiscordUnlinkUser : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordOnUnlinkUser success;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordOnUnlinkUser Failed;
    
    UDiscordUnlinkUser();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDiscordUnlinkUser* UnlinkUser(UObject* WorldContextObject, const FString& SteamTicket);
    
};

