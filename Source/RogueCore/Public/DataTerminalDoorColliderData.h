#pragma once
#include "CoreMinimal.h"
#include "DataTerminalDoorColliderData.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FDataTerminalDoorColliderData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* DoorCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* RepairCollider;
    
    ROGUECORE_API FDataTerminalDoorColliderData();
};

