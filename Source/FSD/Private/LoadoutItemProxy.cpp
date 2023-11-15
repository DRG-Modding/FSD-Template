#include "LoadoutItemProxy.h"
#include "Templates/SubclassOf.h"

ALoadoutItemProxy::ALoadoutItemProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AnimationSet = NULL;
}

TSubclassOf<AItem> ALoadoutItemProxy::GetLoadoutItemFromClass(TSubclassOf<AActor> ActorClass) {
    return NULL;
}


