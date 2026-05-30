#pragma once
#include "CoreMinimal.h"
#include "DataTerminalDeviousDataEditorType.generated.h"

USTRUCT(BlueprintType)
struct FDataTerminalDeviousDataEditorType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Sign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Corresponding;
    
    ROGUECORE_API FDataTerminalDeviousDataEditorType();
};

