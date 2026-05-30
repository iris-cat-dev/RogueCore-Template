#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EnemyAnimInstance.h"
#include "PloverAnimInstance.generated.h"

class UDeepPathfinderMovement;

UCLASS(Blueprintable, NonTransient)
class ROGUECORE_API UPloverAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector MovementBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UDeepPathfinderMovement> Movement;
    
public:
    UPloverAnimInstance();

};

