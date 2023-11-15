#include "FSDCloudLoadSave.h"
#include "FSDCloudSaveHandler.h"

UFSDCloudLoadSave::UFSDCloudLoadSave() {
    this->CloudSaveHandler = CreateDefaultSubobject<UFSDCloudSaveHandler>(TEXT("CloudSaveHandler"));
}

void UFSDCloudLoadSave::StartCloudLoadAll(UObject* WorldContextObject, int32 Index, int32 Offset) {
}


