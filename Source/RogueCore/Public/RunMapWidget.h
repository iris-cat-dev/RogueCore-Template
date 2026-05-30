#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
#include "RunMapWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class URunMapWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    URunMapWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestShowServerBrowser();
    
};

