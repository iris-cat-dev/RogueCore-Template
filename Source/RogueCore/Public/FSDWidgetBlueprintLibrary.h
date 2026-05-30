#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerDynamicDelegate__DelegateSignature -FallbackName=TimerDynamicDelegateDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=Anchors -FallbackName=Anchors
#include "Widgets/Notifications/SProgressBar.h"
#include "Widgets/Layout/SScaleBox.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EStretchDirection -FallbackName=EStretchDirection
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=ETextJustify -FallbackName=ETextJustify
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EHorizontalAlignment -FallbackName=EHorizontalAlignment
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EVerticalAlignment -FallbackName=EVerticalAlignment
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=PaintContext -FallbackName=PaintContext
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=SlateChildSize -FallbackName=SlateChildSize
#include "SizeBoxSettings.h"
#include "Templates/SubclassOf.h"
#include "WidgetAnimationSettings.h"
#include "Widgets/Layout/SScaleBox.h"
#include "Widgets/Notifications/SProgressBar.h"
#include "FSDWidgetBlueprintLibrary.generated.h"

class AFSDPlayerState;
class APlayerController;
class UCanvasPanel;
class UCanvasPanelSlot;
class UFSDCheatManager;
class UHorizontalBox;
class UHorizontalBoxSlot;
class UImage;
class UObject;
class UOverlay;
class UOverlaySlot;
class UPanelWidget;
class UProgressBar;
class UScaleBox;
class USizeBox;
class USpacer;
class UTextBlock;
class UTexture2D;
class UUniformGridPanel;
class UUniformGridSlot;
class UUserWidget;
class UVerticalBox;
class UVerticalBoxSlot;
class UWidget;
class UWidgetAnimation;
class UWindowWidget;

UCLASS(Blueprintable)
class UFSDWidgetBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FWidgetDelegate, UUserWidget*, Widget);
    DECLARE_DYNAMIC_DELEGATE_ThreeParams(FWidgetCreatedOrReusedDelegate, bool, WasCreated, UUserWidget*, Widget, int32, ActiveIndex);
    DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(bool, FCompareWidgetsDelegate, const UWidget*, InFirstWidget, const UWidget*, InSecondWidget);
    
    UFSDWidgetBlueprintLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ToggleAnimationLooping(UObject* WorldContext, UWidgetAnimation* InAnimation, FWidgetAnimationSettings InSettings, bool InLoop, bool& OutPlayingChanged, bool& OutIsPlaying);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TextSmallerThan(const FText& Text1, const FText& Text2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TextGreaterThan(const FText& Text1, const FText& Text2);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UWidget*> SortWidgetArray(const TArray<UWidget*>& InWidgets, const UFSDWidgetBlueprintLibrary::FCompareWidgetsDelegate& InCompareFunction);
    
    UFUNCTION(BlueprintCallable)
    static void SimpleBox(UPARAM(Ref) FPaintContext& Context, FVector2D position, FVector2D Size, FLinearColor Tint);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FTimerHandle SetTimerForNextTick(UObject* WorldContext, const FTimerDynamicDelegate& TimerDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void SetSizeBoxSettings(USizeBox* InSizeBox, const FSizeBoxSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    static void SetProgressBarType(UProgressBar* InProgressBar, TEnumAsByte<EProgressBarFillType::Type> InType);
    
    UFUNCTION(BlueprintCallable)
    static void SetOverlaySlot(UWidget* InWidget, TEnumAsByte<EHorizontalAlignment> InHorizontal, TEnumAsByte<EVerticalAlignment> InVertical, FMargin InPadding);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetMousePosition(UObject* WorldContextObject, int32 X, int32 Y);
    
    UFUNCTION(BlueprintCallable)
    static bool SetHorizontalSlot(UWidget* Widget, FSlateChildSize Size, TEnumAsByte<EHorizontalAlignment> HorizontalAlignment, TEnumAsByte<EVerticalAlignment> VerticalAlignment, FMargin Padding);
    
    UFUNCTION(BlueprintCallable)
    static void SetChildrenVisibility(UPanelWidget* Panel, ESlateVisibility Visibility, int32 StartIndex, TSubclassOf<UUserWidget> OptionalClassFilter);
    
protected:
    UFUNCTION(BlueprintCallable)
    static void SelectVisibility(UWidget* Widget, const ESlateVisibility FALSE, const ESlateVisibility TRUE, const bool Value, bool& IsVisible, bool& VisibilityChanged, ESlateVisibility& NewVisibility);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ScrubAnimation(UObject* WorldContext, UWidgetAnimation* InAnimation, float Progress01);
    
    UFUNCTION(BlueprintCallable)
    static void ScaleTextBlockToHeight(UTextBlock* TextBlock, float TargetHeight, bool SetMinimimumWidth);
    
    UFUNCTION(BlueprintCallable)
    static void ScaleImageToHeight(UImage* Image, float TargetHeight);
    
    UFUNCTION(BlueprintCallable)
    static void ResetAnimationToStartTime(UUserWidget* Widget, UWidgetAnimation* Animation);
    
    UFUNCTION(BlueprintCallable)
    static void ResetAnimationToEndTime(UUserWidget* Widget, UWidgetAnimation* Animation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PrintStrings(UObject* WorldContextObject, const TArray<FString>& InStrings, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float duration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString MidIgnoringWhiteSpace(const FString& Source, int32 Index, int32 count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D MeasureTextSize(const FText& Text, const FSlateFontInfo& Font);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D MeasureTextBlockSize(const UTextBlock* TextBlock);
    
    UFUNCTION(BlueprintCallable)
    static void Line(FPaintContext& Context, FVector2D Pos1, FVector2D Pos2, FLinearColor Tint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor LerpColors(const TArray<FLinearColor>& Colors, bool Interpolate, float Progress01);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 LengthIgnoringWhitespace(const FString& Source);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsWindowsPlatform(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWhiteSpaceAt(const FString& Source, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWhiteSpace(const FString& Source);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsHUDVisible(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDesignTime(UUserWidget* InUserWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString IntToRomanNumeral(int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasAnyVisibleChildren(UPanelWidget* Panel, int32 StartIndex, TSubclassOf<UUserWidget> OptionalClassFilter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetShortTimeString(int32 TotalSeconds, bool BlinkDelimiter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWindowWidget* GetParentWindowWidget(UUserWidget* InWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUserWidget* GetParentUserWidget(UUserWidget* InWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AFSDPlayerState* GetOwningFSDPlayerState(UWidget* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetKeyName(const FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFontMaxHeight(const FSlateFontInfo& Font);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFontBaseline(const FSlateFontInfo& Font);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UWidget* GetFocusedWidget(UObject* WorldContextObject, APlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUserWidget* GetFocusableParentUserWidget(UUserWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetDrawSize(UPARAM(Ref) FPaintContext& InContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UFSDCheatManager* GetCheatManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UWidget*> GetAllChildrenOfClass(UPanelWidget* Panel, TSubclassOf<UWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWidget* FindChildWidget(UPARAM(Ref) UPanelWidget*& ParentWidget, TSubclassOf<UUserWidget> WidgetClass, bool SearchChildren);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UVerticalBox* CreateVerticalBox(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UTextBlock* CreateTextBlock(UObject* WorldContext, FText Text, FSlateFontInfo Font, TEnumAsByte<ETextJustify::Type> Justification, FLinearColor Color, bool WrapText);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static USpacer* CreateSpacer(UObject* WorldContext, FVector2D Size);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UScaleBox* CreateScaleBox(UObject* WorldContext, TEnumAsByte<EStretch::Type> InStretch, TEnumAsByte<EStretchDirection::Type> InStretchDirection);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UUserWidget*> CreateOrReuseChildrenWithCallbackEx(UPanelWidget* Panel, int32 count, TSubclassOf<UUserWidget> WidgetClass, const UFSDWidgetBlueprintLibrary::FWidgetCreatedOrReusedDelegate& OnCreatedOrReused, const UFSDWidgetBlueprintLibrary::FWidgetDelegate& OnCollapsed);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UUserWidget*> CreateOrReuseChildrenWithCallback(UPanelWidget* Panel, int32 count, TSubclassOf<UUserWidget> WidgetClass, const UFSDWidgetBlueprintLibrary::FWidgetCreatedOrReusedDelegate& OnCreatedOrReused);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UUserWidget*> CreateOrReuseChildren(UPanelWidget* Panel, int32 count, TSubclassOf<UUserWidget> WidgetClass, bool ClearPanel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UImage* CreateImageSized(UObject* WorldContext, UTexture2D* Texture, FLinearColor Tint, FVector2D Size);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UImage* CreateImageFromBrush(UObject* WorldContext, FSlateBrush InBrush, FLinearColor InColorAndOpacity);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UImage* CreateImage(UObject* WorldContext, UTexture2D* Texture, FLinearColor Tint, bool AutoSize);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UHorizontalBox* CreateHorizontalBox(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText ClampTextLength(const FText& Text, int32 MaxLength, const FText& CutOffIndicator);
    
    UFUNCTION(BlueprintCallable)
    static void Box(UPARAM(Ref) FPaintContext& Context, FVector2D position, FVector2D Size, const FSlateBrush& Brush, FLinearColor Tint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreWidgetsIntersecting(const UWidget* InWidget1, const UWidget* InWidget2);
    
    UFUNCTION(BlueprintCallable)
    static UWidget* AddWidgetToRow(UVerticalBox* VerticalBox, UWidget* Widget, int32 MaxWidgetsPerRow, float WidgetSpacing, float RowSpacing, UHorizontalBoxSlot*& OutSlot, UHorizontalBox*& OutRow);
    
    UFUNCTION(BlueprintCallable)
    static UWidget* AddChildToVerticalBoxEx(UVerticalBox* VerticalBox, UWidget* Widget, TEnumAsByte<EHorizontalAlignment> HorizontalAlignment, TEnumAsByte<EVerticalAlignment> VerticalAlignment, float Size, FMargin Padding, UVerticalBoxSlot*& OutSlot, UVerticalBox*& OutVerticalBox);
    
    UFUNCTION(BlueprintCallable)
    static UWidget* AddChildToUniformGridEx(UUniformGridPanel* GridPanel, UWidget* Widget, TEnumAsByte<EHorizontalAlignment> HorizontalAlignment, TEnumAsByte<EVerticalAlignment> VerticalAlignment, int32 Column, int32 Row, UUniformGridSlot*& OutSlot, UUniformGridPanel*& OutGridPanel);
    
    UFUNCTION(BlueprintCallable)
    static UWidget* AddChildToOverlayEx(UOverlay* OverlayPanel, UWidget* Widget, TEnumAsByte<EHorizontalAlignment> HorizontalAlignment, TEnumAsByte<EVerticalAlignment> VerticalAlignment, FMargin Padding, UOverlaySlot*& OutSlot, UOverlay*& OutOverlayPanel);
    
    UFUNCTION(BlueprintCallable)
    static UWidget* AddChildToHorizontalBoxEx(UHorizontalBox* HorizontalBox, UWidget* Widget, TEnumAsByte<EHorizontalAlignment> HorizontalAlignment, TEnumAsByte<EVerticalAlignment> VerticalAlignment, float Size, FMargin Padding, UHorizontalBoxSlot*& OutSlot, UHorizontalBox*& OutHorizontalBox);
    
    UFUNCTION(BlueprintCallable)
    static UWidget* AddChildToCanvasEx(UCanvasPanel* CanvasPanel, UWidget* Widget, FAnchors Anchors, FMargin Offsets, bool AutoSize, int32 Z_Order, UCanvasPanelSlot*& OutSlot, UCanvasPanel*& OutCanvasPanel);
    
};

