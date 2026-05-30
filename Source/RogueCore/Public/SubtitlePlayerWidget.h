#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SubtitlePlayerTableRow.h"
#include "SubtitlePlayerWidget.generated.h"

class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class USubtitlePlayerWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double StartDelay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSubtitlePlayerTableRow> SubtitlesToShow;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double PlaybackStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NextSubtitleIndex;
    
public:
    USubtitlePlayerWidget();

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void Play(UDataTable* Subtitles);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyDisplaySubtitle(const FText& Text, const float TimeToShowInSeconds);
    
};

