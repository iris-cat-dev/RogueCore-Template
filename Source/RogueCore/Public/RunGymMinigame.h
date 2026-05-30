#pragma once
#include "CoreMinimal.h"
#include "BaseGymMinigame.h"
#include "RunGymMinigame.generated.h"

class UMinigameEnemiesWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URunGymMinigame : public UBaseGymMinigame {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMinigameEnemiesWidget* EnemiesWidget;
    
public:
    URunGymMinigame(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void IFrameChange(bool On);
    
};

