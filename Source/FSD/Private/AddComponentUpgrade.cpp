#include "AddComponentUpgrade.h"
#include "Templates/SubclassOf.h"

UAddComponentUpgrade::UAddComponentUpgrade() {
    this->ComponentClass = NULL;
    this->ServerOnly = true;
}

bool UAddComponentUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, TSubclassOf<UActorComponent> NewComponentClass, bool includePreview) {
    return false;
}


