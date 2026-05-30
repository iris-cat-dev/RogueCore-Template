#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EUnlockType.h"
#include "UBXEUnlockTypeWidget.generated.h"

class UUBXEUnlockTypeWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API UUBXEUnlockTypeWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUnlockTypeDelegate, UUBXEUnlockTypeWidget*, InWidget, EUnlockType, InUnlockType);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnlockTypeDelegate OnUnlockTypeChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnlockType UnlockType;
    
public:
    UUBXEUnlockTypeWidget();

    UFUNCTION(BlueprintCallable)
    void SetUnlockType(EUnlockType InUnlockType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnUnlockTypeChanged();
    
};

