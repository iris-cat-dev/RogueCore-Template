#pragma once
#include "CoreMinimal.h"
#include "TXNegotiationEndWorkbenchAttributeOption.generated.h"

USTRUCT(BlueprintType)
struct FTXNegotiationEndWorkbenchAttributeOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    ROGUECORE_API FTXNegotiationEndWorkbenchAttributeOption();
};

