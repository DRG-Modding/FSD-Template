#include "LoadoutItemProxy.h"
#include "Templates/SubclassOf.h"

class AActor;
class AItem;

TSubclassOf<AItem> ALoadoutItemProxy::GetLoadoutItemFromClass(TSubclassOf<AActor> ActorClass) {
    return NULL;
}

ALoadoutItemProxy::ALoadoutItemProxy() {
    this->AnimationSet = NULL;
}

