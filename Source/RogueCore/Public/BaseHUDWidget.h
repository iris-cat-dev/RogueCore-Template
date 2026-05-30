#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BaseHUDWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBaseHUDWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UBaseHUDWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateVisibility();
    
};

