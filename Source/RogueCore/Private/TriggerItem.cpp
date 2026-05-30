#include "TriggerItem.h"

FTriggerItem::FTriggerItem() {
    this->TriggerClass = nullptr;
    this->Transform = FTransform::Identity;
    this->Message = FName();
}

