#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MinigameEnemiesWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ROGUECORE_API UMinigameEnemiesWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UMinigameEnemiesWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnemyVisibility(bool visible, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnemyLocation(float Location, int32 Index);
    
};

