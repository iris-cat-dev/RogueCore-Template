#pragma once
#include "CoreMinimal.h"
#include "EPawnMaterialMode.h"
#include "PawnMaterialState.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FPawnMaterialState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPawnMaterialMode MaterialMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OverrideMaterial;
    
    ROGUECORE_API FPawnMaterialState();
};

