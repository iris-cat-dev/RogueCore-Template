#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
#include "YesNoPromptWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYesNoPromptWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnYesNoClickedDelegate, bool, Yes);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyOnClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCloseAllWindows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnYesNoClickedDelegate OnClickedCallback;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DelayBeforeInputIsAccepted;
    
public:
    UYesNoPromptWidget();

    UFUNCTION(BlueprintCallable)
    void Show(FText Title, FText Message, const UYesNoPromptWidget::FOnYesNoClickedDelegate& OnYesNoClicked);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShow(const FText& Title, const FText& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClicked(bool Yes);
    
    UFUNCTION(BlueprintCallable)
    void Clicked(bool YesClicked);
    
};

