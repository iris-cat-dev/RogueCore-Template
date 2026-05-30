#pragma once
#include "CoreMinimal.h"
#include "DelegateDelegate.h"
#include "WindowWidget.h"
#include "WorkbenchWindowWidget.generated.h"

class UUnlockCollectionTag;

UCLASS(Blueprintable, EditInlineNew)
class UWorkbenchWindowWidget : public UWindowWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnUpgradeSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUnlockCollectionTag* WorkbenchCollectionTag;
    
public:
    UWorkbenchWindowWidget();

};

