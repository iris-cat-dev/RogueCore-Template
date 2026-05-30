#pragma once
#include "CoreMinimal.h"
#include "PickaxeMeshInstance.generated.h"

class UMaterialInterface;
class UMeshComponent;

USTRUCT(BlueprintType)
struct FPickaxeMeshInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* FP_Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* TP_Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialOverride;
    
    ROGUECORE_API FPickaxeMeshInstance();
};

