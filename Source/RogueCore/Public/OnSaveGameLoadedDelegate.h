#pragma once
#include "CoreMinimal.h"
#include "OnSaveGameLoadedDelegate.generated.h"

class UFSDSaveGame;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSaveGameLoaded, UFSDSaveGame*, SaveGame);

