#pragma once
#include "CoreMinimal.h"
#include "BXEUnlockAction.h"
#include "BXEResupplyAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBXEResupplyAction : public UBXEUnlockAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResupplyPercent;
    
public:
    UBXEResupplyAction();

};

