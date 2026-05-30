#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SeasonEditorRewardWidget.generated.h"

class UReward;

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API USeasonEditorRewardWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReward* Reward;
    
public:
    USeasonEditorRewardWidget();

};

