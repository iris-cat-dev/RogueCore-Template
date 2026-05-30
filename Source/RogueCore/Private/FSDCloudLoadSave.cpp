#include "FSDCloudLoadSave.h"
#include "FSDCloudSaveHandler.h"

UFSDCloudLoadSave::UFSDCloudLoadSave() {
    this->CloudSaveHandler = CreateDefaultSubobject<UFSDCloudSaveHandler>(TEXT("CloudSaveHandler"));
}


