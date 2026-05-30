#pragma once
#include "CoreMinimal.h"
#include "DamageListenerData.h"
#include "DamageParams.h"
#include "DamageEventData.generated.h"

USTRUCT(BlueprintType)
struct FDamageEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDamageListenerData> listenerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageParams Params;
    
    ROGUECORE_API FDamageEventData();
};

