#include "KeepInsideWorld.h"

class UObject;
class AActor;

void UKeepInsideWorld::UnregisterForKeepInsideWorld(UObject* WorldContextObject, AActor* Actor) {
}

void UKeepInsideWorld::RegisterForKeepInsideWorld(UObject* WorldContextObject, AActor* Actor) {
}

UKeepInsideWorld::UKeepInsideWorld() {
    this->IteratorIndex = 0;
}

