#pragma once
#include "CoreMinimal.h"
#include "ReadyUpState.h"
#include "WindowWidget.h"
#include "ReadyUpWindow.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UReadyUpWindow : public UWindowWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReadyUpState State;
    
public:
    UReadyUpWindow();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveStateChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveStageChanged();
    
};

