#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "DeadStateComponent.generated.h"

class UAnimMontage;
class UFXSystemAsset;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDeadStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float respawnDelay;
    
public:
    UDeadStateComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDeathParameters(float NewRespawnDelay, float effectDelay, UAnimMontage* deathMontage, UFXSystemAsset* deathEffect, bool useAnimationTimeAsRespawnTime);
    
};

