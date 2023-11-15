#include "SavableActor.h"

ASavableActor::ASavableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnableDangerousSaveGameIDEditing = false;
}


