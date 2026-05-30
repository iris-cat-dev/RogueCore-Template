#pragma once
#include "CoreMinimal.h"
#include "NegotiationMenuSettings.generated.h"

class UBXENegotiationWidget;

USTRUCT(BlueprintType)
struct FNegotiationMenuSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBXENegotiationWidget> NegotiationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Z_Order;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialCountDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdditionalCountDown;
    
    ROGUECORE_API FNegotiationMenuSettings();
};

