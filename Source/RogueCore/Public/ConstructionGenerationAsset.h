#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "GameplayTagContainer.h"
#include "ConstructionGenerationGroup.h"
#include "ConstructionItem.h"
#include "ConstructionGenerationAsset.generated.h"

UCLASS(Blueprintable)
class UConstructionGenerationAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConstructionItem> Constructions;
    
    UConstructionGenerationAsset();

    UFUNCTION(BlueprintCallable)
    FConstructionGenerationGroup CreateConstructionGroup(int32 InBudget, const FGameplayTagQuery& InQuery, UPARAM(Ref) FRandomStream& InRandomStream);
    
};

