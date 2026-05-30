#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FSDLevelLoadingPersistentWidget.generated.h"

class UTexture;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFSDLevelLoadingPersistentWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool AllowRemoveFromParent;
    
public:
    UFSDLevelLoadingPersistentWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFadeProgress(float Fade, UTexture* LoadingImage);
    
};

