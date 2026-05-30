#include "CustomCounter.h"

FCustomCounter::FCustomCounter() {
    this->OnCount = FCustomCounterDelegate();
    this->Owner = nullptr;
}

