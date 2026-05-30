#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WorkbenchUpgradeWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UWorkbenchUpgradeWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UWorkbenchUpgradeWidget();

    UFUNCTION(BlueprintCallable)
    void Reset();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveReset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveInitializeOnce();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeOnce();
    
};

