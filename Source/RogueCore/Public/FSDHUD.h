#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "EHUDVisibilityReason.h"
#include "GameFramework/HUD.h"
#include "FSDHUD.generated.h"

class AFSDHUD;
class APlayerCameraDrone;
class APlayerCharacter;
class APlayerController;
class UFSDMainHUDWidget;
class URadarPointComponent;

UCLASS(Blueprintable, NonTransient)
class AFSDHUD : public AHUD {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSetObjectivesVisible, bool, inVisible, bool, animate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHudWidgetChangedDelegate, UFSDMainHUDWidget*, NewHudWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHudVisibilityChanged, bool, InHudVisible);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetObjectivesVisible SetObjectivesVisible;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHudVisibilityChanged OnHUDVisibilityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHudWidgetChangedDelegate OnHudWidgetChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 IsVisibleFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFSDMainHUDWidget* HUDWidget;
    
public:
    AFSDHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ToggleHUDVisibility(EHUDVisibilityReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowObjectives(bool InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDWidget(UFSDMainHUDWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDVisible(bool IsVisible, EHUDVisibilityReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveResetHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RadarPointAdded(URadarPointComponent* radarPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerSpawned(APlayerCharacter* Player);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVisibilityChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHUDVisibleFlagSet(EHUDVisibilityReason Reason) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSeamlessTravel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFSDMainHUDWidget* GetHUDWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHUDVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AFSDHUD* GetFSDHUD(APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CameraDroneSpawned(APlayerCameraDrone* Drone);
    
};

