#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OnSoundQueDelegateDelegate.h"
#include "MinigameWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMinigameWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSoundQueDelegate OnSoundQue;
    
    UMinigameWidgetBase();

};

