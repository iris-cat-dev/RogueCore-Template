#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SnakingTentacleTargetComponent.generated.h"

class ASnakingCoreTentacle;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API USnakingTentacleTargetComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ASnakingCoreTentacle>> Targeting;
    
public:
    USnakingTentacleTargetComponent(const FObjectInitializer& ObjectInitializer);

};

