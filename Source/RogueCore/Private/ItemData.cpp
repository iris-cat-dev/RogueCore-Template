#include "ItemData.h"
#include "Templates/SubclassOf.h"

UItemData::UItemData() {
    this->ItemID = nullptr;
    this->IconLine = nullptr;
    this->IconBG = nullptr;
    this->IconDetailed = nullptr;
    this->FunctionalDescription = FText::FromString(TEXT("Write me"));
    this->CreditCost = 0;
    this->RequiredCharacterLevel = 0;
}

TSoftClassPtr<AShowroomItem> UItemData::GetShowroomItem() const {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UItemData::GetPreviewImageSoft() const {
    return NULL;
}

UTexture2D* UItemData::GetPreviewImage(UObject* WorldContext) const {
    return NULL;
}

TSubclassOf<AActor> UItemData::GetPreviewActorClass() const {
    return NULL;
}

TArray<FCraftingCost> UItemData::GetCraftingCost() const {
    return TArray<FCraftingCost>();
}


