#pragma once
#include "CoreMinimal.h"
#include "DiscordOnGetLinkedUserDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDiscordOnGetLinkedUser, const FString&, DiscordUser);

