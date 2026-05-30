#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "BarQuestObjective.generated.h"

UCLASS(Blueprintable)
class UBarQuestObjective : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RepsPerSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SetsToComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UBarQuestObjective();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSetsToComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRepsPerSets() const;
    
};

