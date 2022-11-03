#include "KeepInsideWorld.h"

class AActor;
class UObject;

void UKeepInsideWorld::UnregisterForKeepInsideWorld(UObject* WorldContextObject, AActor* Actor) {
}

void UKeepInsideWorld::RegisterForKeepInsideWorld(UObject* WorldContextObject, AActor* Actor) {
}

UKeepInsideWorld::UKeepInsideWorld() {
    this->IteratorIndex = 0;
}

