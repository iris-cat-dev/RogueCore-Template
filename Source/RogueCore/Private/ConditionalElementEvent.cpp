#include "ConditionalElementEvent.h"

FConditionalElementEvent::FConditionalElementEvent() {
    this->EventType = nullptr;
    this->Conditions = FElementConditionArray();
}

