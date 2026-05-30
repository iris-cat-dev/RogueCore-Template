#pragma once
#include "CoreMinimal.h"
#include "TXNegotiationEndWorkbenchWeaponOption.generated.h"

USTRUCT(BlueprintType)
struct FTXNegotiationEndWorkbenchWeaponOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Attributes;
    
    ROGUECORE_API FTXNegotiationEndWorkbenchWeaponOption();
};

