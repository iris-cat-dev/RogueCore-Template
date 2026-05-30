#include "ItemsBarIcon.h"

UItemsBarIcon::UItemsBarIcon() : UUserWidget(FObjectInitializer::Get()) {
    this->Selected = false;
    this->ItemBar = nullptr;
    this->Character = nullptr;
    this->Item = nullptr;
    this->Index = 0;
}





