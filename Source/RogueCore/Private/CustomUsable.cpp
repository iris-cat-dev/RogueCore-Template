#include "CustomUsable.h"

FCustomUsable::FCustomUsable() {
    this->usable = nullptr;
    this->TerminationType = ECustomUsableType::ClearOnFrameEnd;
}

