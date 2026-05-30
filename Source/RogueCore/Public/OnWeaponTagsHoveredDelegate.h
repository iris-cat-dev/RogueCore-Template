#pragma once
#include "CoreMinimal.h"
#include "OnWeaponTagsHoveredDelegate.generated.h"

class UUserWidget;
class UWeaponTagBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWeaponTagsHovered, UUserWidget*, Widget, TArray<UWeaponTagBase*>, WeaponTags);

