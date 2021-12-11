#include "ItemBlueprintReward.h"
#include "Templates/SubclassOf.h"

class AActor;

AActor* UItemBlueprintReward::GetActorDefaultObject() const {
    return NULL;
}

TSubclassOf<AActor> UItemBlueprintReward::GetActorClass() const {
    return NULL;
}

UItemBlueprintReward::UItemBlueprintReward() {
}

