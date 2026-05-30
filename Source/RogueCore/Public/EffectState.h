#pragma once
#include "CoreMinimal.h"
#include "EffectState.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FEffectState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool EffectsActive;
    
    ROGUECORE_API FEffectState();
};

