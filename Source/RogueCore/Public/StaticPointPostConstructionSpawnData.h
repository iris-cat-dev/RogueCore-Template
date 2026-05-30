#pragma once
#include "CoreMinimal.h"
#include "PostConstructionSpawnData.h"
#include "StaticSpawnPointSelection.h"
#include "StaticPointPostConstructionSpawnData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UStaticPointPostConstructionSpawnData : public UPostConstructionSpawnData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStaticSpawnPointSelection StaticSpawnPointSelection;
    
public:
    UStaticPointPostConstructionSpawnData();

};

