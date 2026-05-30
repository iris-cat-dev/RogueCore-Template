#pragma once
#include "CoreMinimal.h"
#include "TXNegotiationEndUpgradeOption.generated.h"

USTRUCT(BlueprintType)
struct FTXNegotiationEndUpgradeOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Attributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_selectable;
    
    ROGUECORE_API FTXNegotiationEndUpgradeOption();
};

