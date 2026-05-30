#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DamageNumberWidget.generated.h"

class UFSDLabelWidget;
class UImage;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UDamageNumberWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFSDLabelWidget* DamageLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* HitTypeIcon;
    
public:
    UDamageNumberWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidgetAnimation* GetUpAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidgetAnimation* GetShakeAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidgetAnimation* GetFadeAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UWidgetAnimation*> GetDirectionAnims();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UFSDLabelWidget* GetDamageLabel();
    
};

