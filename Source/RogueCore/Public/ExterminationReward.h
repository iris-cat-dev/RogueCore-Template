#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "StageLogic.h"
#include "ExterminationReward.generated.h"

class AActor;
class UResourceData;

UCLASS(Abstract, Blueprintable)
class UExterminationReward : public UStageLogic {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* Resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AwardSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AllowedFilter;
    
public:
    UExterminationReward();

protected:
    UFUNCTION(BlueprintCallable)
    void OnEnemyKilled(const FGameplayTagContainer& GameplayTags, AActor* killedEnemy);
    
};

