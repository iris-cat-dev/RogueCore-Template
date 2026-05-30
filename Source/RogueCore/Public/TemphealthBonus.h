#pragma once
#include "CoreMinimal.h"
#include "DamageBonusBase.h"
#include "TemphealthBonus.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTemphealthBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amount;
    
    UTemphealthBonus();

};

