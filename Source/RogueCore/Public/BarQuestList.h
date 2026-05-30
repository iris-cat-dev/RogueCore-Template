#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "BarQuestData.h"
#include "BarQuestList.generated.h"

UCLASS(Blueprintable)
class UBarQuestList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBarQuestData> Quests;
    
    UBarQuestList();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBarQuestData> GetQuests() const;
    
};

