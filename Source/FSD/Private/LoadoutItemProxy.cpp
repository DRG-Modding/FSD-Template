#include "LoadoutItemProxy.h"
#include "Templates/SubclassOf.h"

TSubclassOf<AItem> ALoadoutItemProxy::GetLoadoutItemFromClass(TSubclassOf<AActor> ActorClass) {
    return NULL;
}

ALoadoutItemProxy::ALoadoutItemProxy() {
    this->AnimationSet = NULL;
}

