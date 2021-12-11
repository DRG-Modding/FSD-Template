#include "SavableDataAsset.h"

FGuid USavableDataAsset::GetSavegameID() const {
    return FGuid{};
}

USavableDataAsset::USavableDataAsset() {
    this->EnableDangerousSaveGameIDEditing = false;
    this->BuildRestriction = NULL;
}

