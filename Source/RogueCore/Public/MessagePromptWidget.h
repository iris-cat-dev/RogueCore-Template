#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
#include "MessagePromptWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMessagePromptWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMessagePromptWidgetDelegate);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanCloseFromKeyInput;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMessagePromptWidgetDelegate OnAcknowledgedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DelayBeforeInputIsAccepted;
    
public:
    UMessagePromptWidget();

    UFUNCTION(BlueprintCallable)
    void Show(const FText NewTitle, const FText NewMessage);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyShown(const FText& Title, const FText& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyAcknowledged();
    
    UFUNCTION(BlueprintCallable)
    void Acknowledge();
    
};

