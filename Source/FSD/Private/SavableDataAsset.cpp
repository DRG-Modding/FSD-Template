#include "SavableDataAsset.h"

USavableDataAsset::USavableDataAsset() {
    this->EnableDangerousSaveGameIDEditing = false;
    this->BuildRestriction = NULL;
}

FGuid USavableDataAsset::GetSavegameID() const {
    return FGuid{};
}


