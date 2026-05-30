#pragma once
#include "CoreMinimal.h"
#include "OnQuestAcceptedDelegate.generated.h"

class UDrinkableDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestAccepted, UDrinkableDataAsset*, QuestDrink);

