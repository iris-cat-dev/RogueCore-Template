#include "FSDPlayerControllerBase.h"
#include "FSDPlayerCameraManager.h"
#include "WindowManager.h"

AFSDPlayerControllerBase::AFSDPlayerControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraManagerClass = AFSDPlayerCameraManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
    this->GlobalMaterialParameterCollection = nullptr;
    this->WindowManager = CreateDefaultSubobject<UWindowManager>(TEXT("WindowManager"));
    this->StoreCharacterWhenLeavingGame = true;
}

void AFSDPlayerControllerBase::ToggleAnalogCursor(bool visible) {
}

void AFSDPlayerControllerBase::StopAspectRatioAxisConstraint() {
}

void AFSDPlayerControllerBase::StartAspectRatioAxisConstraint() {
}

void AFSDPlayerControllerBase::SetHUDVisible(bool IsVisible, EHUDVisibilityReason Reason) {
}

void AFSDPlayerControllerBase::Server_ResetPlayerState_Implementation() {
}

void AFSDPlayerControllerBase::Server_Cheat_SwitchCharacter_Implementation(UPlayerCharacterID* newCharacter) {
}

void AFSDPlayerControllerBase::RequestToggleEscapeMenu() {
}

void AFSDPlayerControllerBase::RequestOpenEscapeMenu() {
}

void AFSDPlayerControllerBase::RequestCloseEscapeMenu() {
}








bool AFSDPlayerControllerBase::IsPlayerBlocked(const FString& UserId) {
    return false;
}

bool AFSDPlayerControllerBase::IsHUDVisibleFlagSet(EHUDVisibilityReason Reason) {
    return false;
}

void AFSDPlayerControllerBase::Client_WasKicked_Implementation(EDisconnectReason Reason) {
}


