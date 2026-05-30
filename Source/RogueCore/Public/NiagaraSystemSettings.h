#pragma once
#include "CoreMinimal.h"
#include "EmitterConnection.h"
#include "NiagaraSystemSettings.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSystemSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEmitterConnection> EmitterParamConnections;
    
    ROGUECORE_API FNiagaraSystemSettings();
};

