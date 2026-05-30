#pragma once
#include "CoreMinimal.h"
#include "ECustomUsableType.h"
#include "CustomUsable.generated.h"

class UUsableComponentBase;

USTRUCT(BlueprintType)
struct FCustomUsable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUsableComponentBase* usable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECustomUsableType TerminationType;
    
    ROGUECORE_API FCustomUsable();
};

