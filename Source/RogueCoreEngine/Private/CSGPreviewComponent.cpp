#include "CSGPreviewComponent.h"

UCSGPreviewComponent::UCSGPreviewComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BaseBuilder = nullptr;
    this->CurrentBakeConfig = nullptr;
    this->UsePreviewScene = false;
    this->ChangeCount = 0;
}


