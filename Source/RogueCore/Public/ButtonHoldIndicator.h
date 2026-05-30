#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "Blueprint/UserWidget.h"
#include "ButtonHoldSettings.h"
#include "ButtonHoldIndicator.generated.h"

class UButton;
class UButtonHoldIndicator;
class UButtonHoldIndicatorAsset;
class UImage;
class UMaterialInstanceDynamic;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UButtonHoldIndicator : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHoldingDelegate, UButtonHoldIndicator*, HoldIndicator);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHoldCompletedDelegate, UButtonHoldIndicator*, HoldIndicator);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHoldingDelegate OnHoldProgressChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHoldCompletedDelegate OnHoldCompleted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UButton> Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UButtonHoldIndicatorAsset* SettingsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideBrushSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D OverrideBrushSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideHoldDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideHoldDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FButtonHoldSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UButton> ButtonInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UOverlay> RootOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UImage> Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMaterialInstanceDynamic> DynamicMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHolding;
    
public:
    UButtonHoldIndicator();

    UFUNCTION(BlueprintCallable)
    void SetButton(UButton* InButton);
    
    UFUNCTION(BlueprintCallable)
    void EndHold();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ButtonUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void ButtonReleased();
    
    UFUNCTION(BlueprintCallable)
    void ButtonPressed();
    
    UFUNCTION(BlueprintCallable)
    void ButtonHovered();
    
public:
    UFUNCTION(BlueprintCallable)
    void BeginHold();
    
};

