#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OnWeaponTagsHoveredDelegate.h"
#include "OnWeaponTagsUnhoveredDelegate.h"
#include "WeaponTagListenerWidget.generated.h"

class UWeaponTagBase;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UWeaponTagListenerWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnWeaponTagsUnhovered OnWeaponTagsUnhovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnWeaponTagsHovered OnWeaponTagsHovered;
    
    UWeaponTagListenerWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWeaponTagsUnhovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWeaponTagsHovered(UUserWidget* fromWidget, const TArray<UWeaponTagBase*>& WeaponTags);
    
};

