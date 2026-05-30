#include "ItemPreviewActor.h"
#include "Templates/SubclassOf.h"

AItemPreviewActor::AItemPreviewActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentSkinColor = nullptr;
    this->CurrentSkinMesh = nullptr;
    this->itemClass = nullptr;
    this->CameraKey_Normal = nullptr;
    this->CameraKey_CloseUp = nullptr;
}

void AItemPreviewActor::SkinItem(USkinEffect* Skin) {
}

void AItemPreviewActor::SetItemClass(TSubclassOf<AActor> NewItemClass) {
}

void AItemPreviewActor::OnSkinPreviewChanged(UItemSkin* PreviewSkin) {
}

void AItemPreviewActor::OnSkinItem_Implementation(USkinEffect* Skin) {
}

void AItemPreviewActor::OnSkinChanged() {
}

void AItemPreviewActor::ChangeSkin(UItemSkin* skinMesh, UItemSkin* skinColor, bool isPreview) {
}


