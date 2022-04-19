#include "FSDCloudLoadSave.h"
#include "FSDCloudSaveHandler.h"

class UObject;

void UFSDCloudLoadSave::StartCloudLoadAll(UObject* WorldContextObject, int32 Index, int32 Offset) {
}

UFSDCloudLoadSave::UFSDCloudLoadSave() {
    this->CloudSaveHandler = CreateDefaultSubobject<UFSDCloudSaveHandler>(TEXT("CloudSaveHandler"));
}

