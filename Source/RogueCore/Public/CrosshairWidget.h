#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "Blueprint/UserWidget.h"
#include "CrosshairWidget.generated.h"

class AItem;

UCLASS(Blueprintable, EditInlineNew)
class UCrosshairWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UCrosshairWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetData(AItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpgraded(AItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector2D GetExtensionOffset() const;
    
};

