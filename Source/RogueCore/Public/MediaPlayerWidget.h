#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "Blueprint/UserWidget.h"
#include "EMediaPlayerState.h"
#include "EVolumeType.h"
#include "MediaPlayerWidget.generated.h"

class UBinkMediaTexture;
class UImage;
class UMediaPlayerWidget;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UMediaPlayerWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStateChanged, UMediaPlayerWidget*, InPlayerWidget, EMediaPlayerState, InState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMediaPlayerEvent, UMediaPlayerWidget*, InPlayerWidget);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateChanged OnStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMediaPlayerEvent OnEndReached;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Brush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBinkMediaTexture* MediaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVolumeType VolumeCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumeMultiplier;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMediaPlayerState PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* OutputImage;
    
public:
    UMediaPlayerWidget();

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    bool Play();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMediaPlayerState GetPlayerState() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void Callback_MediaEndReached();
    
    UFUNCTION(BlueprintCallable)
    void Callback_MediaClosed();
    
};

