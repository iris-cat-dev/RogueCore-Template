#pragma once
#include "CoreMinimal.h"
#include "EPerkHUDActivationLocation.h"
#include "PerkHUDWidget.h"
#include "PerkActivationWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UPerkActivationWidget : public UPerkHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPerkHUDActivationLocation Location;
    
public:
    UPerkActivationWidget();

};

