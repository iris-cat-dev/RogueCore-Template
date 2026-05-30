#pragma once
#include "CoreMinimal.h"
#include "BoilStaticMeshComponentItem.h"
#include "BoilStaticMeshComponentPool.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FBoilStaticMeshComponentPool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    UStaticMesh* BoilMesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoilStaticMeshComponentItem> StaticMeshComponentArray;
    
public:
    ROGUECORE_API FBoilStaticMeshComponentPool();
};

