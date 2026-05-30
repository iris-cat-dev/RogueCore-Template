#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
#include "ECharacterState.h"
#include "BTDecorator_CheckPlayerState.generated.h"

UCLASS(Blueprintable)
class ROGUECORE_API UBTDecorator_CheckPlayerState : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetToCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECharacterState> BannedStates;
    
public:
    UBTDecorator_CheckPlayerState();

};

