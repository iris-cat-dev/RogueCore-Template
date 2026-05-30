#include "ShowroomManager.h"

UShowroomManager::UShowroomManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentStage = nullptr;
    this->StageInstance = nullptr;
    this->RenderTarget = nullptr;
}

UShowroomController* UShowroomManager::GetController() const {
    return NULL;
}

void UShowroomManager::ClearShowroom() {
}


