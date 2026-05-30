#include "CharacterShowroomController.h"

UCharacterShowroomController::UCharacterShowroomController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharacterInstance = nullptr;
}


void UCharacterShowroomController::PlayShowroomCharacterSpawnMontage(const UObject* WorldContext) {
}

void UCharacterShowroomController::PlayShowroomCharacterSelectionMontage(const UObject* WorldContext) {
}

UPlayerCharacterID* UCharacterShowroomController::GetShowroomCharacterClass(const UObject* WorldContext) {
    return NULL;
}


UCharacterShowroomController* UCharacterShowroomController::DisplayShowroomCharacter(const UObject* WorldContextObject, UPlayerCharacterID* characterID, UShowroomCameraKey* Key, UShowroomCameraKey* zoomInKey, UShowroomCameraKey* zoomOutKey) {
    return NULL;
}


