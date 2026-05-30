#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockGenericBase.h"
#include "BXEAttributeUnlock.generated.h"

class UBXEAttributeUnlockAction;

UCLASS(Blueprintable)
class UBXEAttributeUnlock : public UBXEUnlockGenericBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBXEAttributeUnlockAction*> Unlocks;
    
public:
    UBXEAttributeUnlock();

};

