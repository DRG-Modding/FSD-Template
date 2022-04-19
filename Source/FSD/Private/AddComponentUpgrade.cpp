#include "AddComponentUpgrade.h"
#include "Templates/SubclassOf.h"

class AItem;
class UActorComponent;
class AFSDPlayerState;

bool UAddComponentUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, TSubclassOf<UActorComponent> NewComponentClass, bool includePreview) {
    return false;
}

UAddComponentUpgrade::UAddComponentUpgrade() {
    this->ComponentClass = NULL;
    this->ServerOnly = true;
}

