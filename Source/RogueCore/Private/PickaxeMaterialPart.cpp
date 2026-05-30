#include "PickaxeMaterialPart.h"

UPickaxeMaterialPart::UPickaxeMaterialPart() {
    this->DynamicIcon = nullptr;
}

UMaterialInstanceDynamic* UPickaxeMaterialPart::CreateIcon(UObject* Owner) const {
    return NULL;
}


