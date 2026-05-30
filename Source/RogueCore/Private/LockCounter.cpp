#include "LockCounter.h"

FLockCounter::FLockCounter() {
    this->LockCount = 0;
    this->LockedActor = nullptr;
}

