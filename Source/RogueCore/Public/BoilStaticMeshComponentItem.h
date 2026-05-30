#pragma once
#include "CoreMinimal.h"
#include "BoilStaticMeshComponentItem.generated.h"

class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FBoilStaticMeshComponentItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UStaticMeshComponent> StaticMeshComponent;
    
    ROGUECORE_API FBoilStaticMeshComponentItem();
};

