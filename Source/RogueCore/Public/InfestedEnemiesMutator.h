#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "InfestedEnemiesMutator.generated.h"

class AFSDPawn;
class UFXSystemAsset;

UCLASS(Blueprintable, EditInlineNew)
class UInfestedEnemiesMutator : public UMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFXSystemAsset*> SpawnEffects;
    
public:
    UInfestedEnemiesMutator();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFXSystemAsset* GetParticleSystem(AFSDPawn* Enemy) const;
    
};

