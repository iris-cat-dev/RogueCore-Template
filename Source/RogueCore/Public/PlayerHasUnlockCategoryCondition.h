#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockConditionBase.h"
#include "PlayerHasUnlockCategoryCondition.generated.h"

class UBXEUnlockCategory;

UCLASS(Blueprintable, EditInlineNew)
class UPlayerHasUnlockCategoryCondition : public UBXEUnlockConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBXEUnlockCategory*> Categories;
    
    UPlayerHasUnlockCategoryCondition();

};

