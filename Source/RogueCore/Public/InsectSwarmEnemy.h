#pragma once
#include "CoreMinimal.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "InsectSwarmEnemy.generated.h"

class USceneComponent;

UCLASS(Abstract, Blueprintable)
class AInsectSwarmEnemy : public AEnemyDeepPathfinderCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* SwarmParticles;
    
public:
    AInsectSwarmEnemy(const FObjectInitializer& ObjectInitializer);

};

