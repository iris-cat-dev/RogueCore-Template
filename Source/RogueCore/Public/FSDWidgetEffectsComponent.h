#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CustomCounter.h"
#include "CustomCounterDelegateDelegate.h"
#include "EFSDPingType.h"
#include "EMoveType.h"
#include "WidgetFade.h"
#include "WidgetMover.h"
#include "WidgetPing.h"
#include "WidgetTextCounter.h"
#include "FSDWidgetEffectsComponent.generated.h"

class UObject;
class UTextBlock;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFSDWidgetEffectsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWidgetPing> WidgetPings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWidgetFade> WidgetFades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWidgetTextCounter> WidgetTextCounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCustomCounter> CustomCounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWidgetMover> WidgetMovers;
    
public:
    UFSDWidgetEffectsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void StartTextCounter(UObject* WorldContext, UTextBlock* Widget, float Start, float End, float duration, int32 MaxDigits, float StartDelay);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void StartCounter(UObject* WorldContext, UObject* Owner, float Start, float End, float duration, const FCustomCounterDelegate& OnCount, float StartDelay);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void PingWidget(UObject* WorldContext, UWidget* Widget, float Amount, float duration, EFSDPingType PingType, float StartDelay);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void MoveWidget(UObject* WorldContext, UUserWidget* Widget, FVector2D Start, FVector2D End, float duration, EMoveType MoveType, float StartDelay);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void MoveOutWidget(UObject* WorldContext, UUserWidget* Widget, FVector2D MoveToOffset, float duration, float StartDelay);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void MoveInWidget(UObject* WorldContext, UUserWidget* Widget, FVector2D MoveFromOffset, float duration, float StartDelay);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void FadeWidget(UObject* WorldContext, UUserWidget* Widget, float StartFade, float EndFade, float duration, float StartDelay);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void FadeOutWidget(UObject* WorldContext, UUserWidget* Widget, float duration, float StartDelay);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void FadeInWidget(UObject* WorldContext, UUserWidget* Widget, float duration, float StartDelay);
    
};

