#pragma once
#include "CoreMinimal.h"
#include "PickaxePartItem.h"
#include "PickaxeMeshPart.generated.h"

class UMaterialInterface;
class UStaticMesh;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UPickaxeMeshPart : public UPickaxePartItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> MaterialOverride;
    
public:
    UPickaxeMeshPart();

};

