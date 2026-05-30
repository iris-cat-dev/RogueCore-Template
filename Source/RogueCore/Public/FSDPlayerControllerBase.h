#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
//CROSS-MODULE INCLUDE V2: -ModuleName=RogueCoreOnlineServices -ObjectName=EDisconnectReason -FallbackName=EDisconnectReason
#include "DelegateDelegate.h"
#include "EHUDVisibilityReason.h"
#include "EMinersManualSection.h"
#include "EMinersManualSinglePage.h"
#include "LocalVoiceStatusDelegate.h"
#include "PlatformComponent.h"
#include "FSDPlayerControllerBase.generated.h"

class UMaterialParameterCollection;
class UPlayerCharacterID;
class UWindowManager;

UCLASS(Blueprintable, Config=Engine)
class AFSDPlayerControllerBase : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* GlobalMaterialParameterCollection;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocalVoiceStatus OnPlayerVoiceStatusChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWindowManager* WindowManager;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlatformComponent> PlatformComponentClasses;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate RequestOpenEscapeMenuDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate RequestCloseEscapeMenuDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate RequestToggleEscapeMenuDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StoreCharacterWhenLeavingGame;
    
public:
    AFSDPlayerControllerBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ToggleAnalogCursor(bool visible);
    
public:
    UFUNCTION(BlueprintCallable)
    void StopAspectRatioAxisConstraint();
    
    UFUNCTION(BlueprintCallable)
    void StartAspectRatioAxisConstraint();
    
    UFUNCTION(BlueprintCallable)
    void SetHUDVisible(bool IsVisible, EHUDVisibilityReason Reason);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ResetPlayerState();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_Cheat_SwitchCharacter(UPlayerCharacterID* newCharacter);
    
    UFUNCTION(BlueprintCallable)
    void RequestToggleEscapeMenu();
    
    UFUNCTION(BlueprintCallable)
    void RequestOpenEscapeMenu();
    
    UFUNCTION(BlueprintCallable)
    void RequestCloseEscapeMenu();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecievePreClientTravel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecieveHUDVisibilityChanged(bool IsVisible);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenStandaloneMinersManualPage(EMinersManualSinglePage page);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenStandaloneMinersManual(EMinersManualSection Section, const FGuid& ID);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestToggleEscapeMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestOpenEscapeMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestCloseEscapeMenu();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerBlocked(const FString& UserId);
    
    UFUNCTION(BlueprintCallable)
    bool IsHUDVisibleFlagSet(EHUDVisibilityReason Reason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_WasKicked(EDisconnectReason Reason);
    
};

