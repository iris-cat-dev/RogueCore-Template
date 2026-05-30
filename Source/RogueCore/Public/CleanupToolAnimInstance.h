#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "CleanupToolAnimInstance.generated.h"

class APlagueCleanupItem;

UCLASS(Blueprintable, NonTransient)
class UCleanupToolAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isUsing;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlagueCleanupItem* CleaningTool;
    
public:
    UCleanupToolAnimInstance();

};

