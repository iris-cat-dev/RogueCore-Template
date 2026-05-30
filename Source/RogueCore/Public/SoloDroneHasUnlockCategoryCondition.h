#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockConditionBase.h"
#include "ECategoryConditionListMode.h"
#include "SoloDroneHasUnlockCategoryCondition.generated.h"

class UBXEUnlockCategory;

UCLASS(Blueprintable, EditInlineNew)
class USoloDroneHasUnlockCategoryCondition : public UBXEUnlockConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBXEUnlockCategory*> Categories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECategoryConditionListMode ListMode;
    
public:
    USoloDroneHasUnlockCategoryCondition();

};

