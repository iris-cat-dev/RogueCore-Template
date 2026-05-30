#pragma once
#include "CoreMinimal.h"
#include "PerkEffectItem.generated.h"

class UBXEUnlockAction;
class UPerkEffect;

USTRUCT(BlueprintType)
struct FPerkEffectItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBXEUnlockAction* Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPerkEffect* effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> CustomTextArguments;
    
    ROGUECORE_API FPerkEffectItem();
};

