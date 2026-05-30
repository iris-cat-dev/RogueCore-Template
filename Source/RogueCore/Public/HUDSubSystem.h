#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "HUDSubSystem.generated.h"

class UBaseHUDWidget;

UCLASS(Blueprintable)
class UHUDSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMainHUDDelegate, UBaseHUDWidget*, MainHud);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMainHUDDelegate OnMainHUDSet;
    
    UHUDSubSystem();

    UFUNCTION(BlueprintCallable)
    void SetMainHUDWidget(UBaseHUDWidget* NewMainHud);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMainHUDSet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBaseHUDWidget* GetMainHUDWidget() const;
    
};

