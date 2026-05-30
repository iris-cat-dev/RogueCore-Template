#pragma once
#include "CoreMinimal.h"
#include "BXEAttributeUnlockAction.h"
#include "ItemLogicUnlockAction.generated.h"

class UItemLogicUnlockComponent;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class UItemLogicUnlockAction : public UBXEAttributeUnlockAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UItemLogicUnlockComponent> ItemLogicUnlockClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amount;
    
public:
    UItemLogicUnlockAction();

};

