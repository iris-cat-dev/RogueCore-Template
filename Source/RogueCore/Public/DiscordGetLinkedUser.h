#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DiscordOnGetLinkedUserDelegate.h"
#include "DiscordGetLinkedUser.generated.h"

class UDiscordGetLinkedUser;
class UObject;

UCLASS(Blueprintable)
class UDiscordGetLinkedUser : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordOnGetLinkedUser success;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordOnGetLinkedUser Delay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDiscordOnGetLinkedUser Failed;
    
    UDiscordGetLinkedUser();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDiscordGetLinkedUser* GetLinkedUser(UObject* WorldContextObject, const FString& SteamTicket);
    
};

