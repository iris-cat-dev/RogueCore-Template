#include "SavableDataAsset.h"

USavableDataAsset::USavableDataAsset() {
    this->EnableDangerousSaveGameIDEditing = false;
    this->BuildRestriction = nullptr;
}

FGuid USavableDataAsset::GetSaveGameID() const {
    return FGuid{};
}


