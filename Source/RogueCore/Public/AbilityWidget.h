#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AbilityWidget.generated.h"

class UAbilityData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAbilityWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilityData* AbilityData;
    
public:
    UAbilityWidget();

};

