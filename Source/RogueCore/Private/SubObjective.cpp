#include "SubObjective.h"

FSubObjective::FSubObjective() {
    this->OnProgressShout = nullptr;
    this->OnCompletedShout = nullptr;
    this->Required = 0;
    this->count = 0;
    this->ObjectiveText = FText::GetEmpty();
}

