#include "ArmorPiece.h"
#include "Templates/SubclassOf.h"
#include "UpgradableGearComponent.h"

AArmorPiece::AArmorPiece(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Upgradable = CreateDefaultSubobject<UUpgradableGearComponent>(TEXT("Upgradable"));
    this->LoadoutProxy = nullptr;
    this->ItemID = nullptr;
    this->WeaponPreviewClass = nullptr;
}

TSubclassOf<AActor> AArmorPiece::GetWeaponViewClass() const {
    return NULL;
}

AArmorPiece* AArmorPiece::GetArmorPieceDefaultObject(TSubclassOf<AArmorPiece> armorPieceClass) {
    return NULL;
}


