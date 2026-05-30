#pragma once
#include "CoreMinimal.h"
#include "ReadyUpMenuSettings.generated.h"

class UReadyUpWindow;

USTRUCT(BlueprintType)
struct FReadyUpMenuSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UReadyUpWindow> ReadyUpWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Z_Order;
    
    ROGUECORE_API FReadyUpMenuSettings();
};

