#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockAction.h"
#include "EItemUpgradeNumberTransformType.h"
#include "BXEPawnStatAction.generated.h"

class UPawnStat;

UCLASS(Blueprintable, EditInlineNew)
class UBXEPawnStatAction : public UBXEUnlockAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnStat* PawnStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemUpgradeNumberTransformType DisplayTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsModifierPercent;
    
public:
    UBXEPawnStatAction();

};

