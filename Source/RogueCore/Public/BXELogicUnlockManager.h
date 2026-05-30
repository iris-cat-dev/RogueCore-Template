#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BXELogicUnlockManager.generated.h"

class UBXELogicUnlockComponent;

UCLASS(Blueprintable)
class UBXELogicUnlockManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBXELogicUnlockComponent*> LogicUnlocks;
    
public:
    UBXELogicUnlockManager();

};

