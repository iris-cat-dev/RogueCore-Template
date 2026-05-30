#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "HUDRadarWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UHUDRadarWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UHUDRadarWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTagContainer GetEnemyTypesTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetDetectionRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceUpdateRadar();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearExtraPlayerPositions();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddExtraPlayerPositions(const TArray<FVector>& InPlayerPosition);
    
};

