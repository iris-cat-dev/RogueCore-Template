#include "GenerateIconInfo.h"

FGenerateIconInfo::FGenerateIconInfo() {
    this->IconType = EGeneratorIconType::Vanity;
    this->PickaxePart = nullptr;
    this->PickaxePartLocation = EPickaxePartLocation::Head;
    this->ItemSkin = nullptr;
    this->Item = nullptr;
    this->Character = nullptr;
    this->bShowCloseUp = false;
    this->PickaxeSet = FPickaxeSet();
    this->Size = FVector2D::ZeroVector;
}

