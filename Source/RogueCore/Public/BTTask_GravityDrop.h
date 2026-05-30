#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_GravityDrop.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UBTTask_GravityDrop : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialDropSpeed;
    
public:
    UBTTask_GravityDrop();

};

