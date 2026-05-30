#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ButtonWidget.generated.h"

class UButton;
class UButtonWidget;
class UObject;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UButtonWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FButtonDelegate, UButtonWidget*, InButton);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonDelegate OnButtonClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonDelegate OnButtonHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonDelegate OnButtonUnhovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* DataObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DataString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DataBool;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimHoveringPlaybackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimClickedPlaybackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bButtonHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bButtonEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* MainButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButtonWidget* InnerButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AnimHovering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AnimClicked;
    
public:
    UButtonWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SetInnerButtonWidget(UButtonWidget* InButton);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetButtonEnabled(bool InIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonData(int32 InDataIndex, UObject* InDataObject, const FString& InDataString, bool InDataBool);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveButtonHoveredChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveButtonEnabledChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void InnerButtonUnhovered(UButtonWidget* InButton);
    
    UFUNCTION(BlueprintCallable)
    void InnerButtonHovered(UButtonWidget* InButton);
    
    UFUNCTION(BlueprintCallable)
    void InnerButtonClicked(UButtonWidget* InButton);
    
public:
    UFUNCTION(BlueprintCallable)
    void Click();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ButtonUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void ButtonHovered();
    
    UFUNCTION(BlueprintCallable)
    void ButtonClicked();
    
};

