#include "FSDSessionUpdater.h"
#include "FSDSessionHandler.h"

UFSDSessionUpdater::UFSDSessionUpdater() {
    this->SessionHandler = CreateDefaultSubobject<UFSDSessionHandler>(TEXT("SessionHandler"));
}


