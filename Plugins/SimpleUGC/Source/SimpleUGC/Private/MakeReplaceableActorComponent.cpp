#include "MakeReplaceableActorComponent.h"

UMakeReplaceableActorComponent::UMakeReplaceableActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->CompatibleReplacement = NULL;
}


