#pragma once
#include "CoreMinimal.h"
#include "DamageBonuses.h"
#include "DamageInstance.h"
#include "DamageParams.h"
#include "AsyncRadialData.generated.h"

USTRUCT(BlueprintType)
struct FAsyncRadialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDamageInstance instance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDamageParams Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDamageBonuses Bonuses;
    
    ROGUECORE_API FAsyncRadialData();
};

