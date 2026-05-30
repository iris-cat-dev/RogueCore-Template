#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "GameplayTagContainer.h"
#include "AllyQueryAsset.generated.h"

UCLASS(Blueprintable)
class UAllyQueryAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery Query;
    
    UAllyQueryAsset();

};

