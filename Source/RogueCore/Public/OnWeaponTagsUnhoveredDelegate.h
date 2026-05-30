#pragma once
#include "CoreMinimal.h"
#include "OnWeaponTagsUnhoveredDelegate.generated.h"

class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWeaponTagsUnhovered, UUserWidget*, Widget);

