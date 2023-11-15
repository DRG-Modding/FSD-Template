#include "KeepInsideWorld.h"

UKeepInsideWorld::UKeepInsideWorld(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IteratorIndex = 0;
}

void UKeepInsideWorld::UnregisterForKeepInsideWorld(UObject* WorldContextObject, AActor* Actor) {
}

void UKeepInsideWorld::RegisterForKeepInsideWorld(UObject* WorldContextObject, AActor* Actor) {
}


