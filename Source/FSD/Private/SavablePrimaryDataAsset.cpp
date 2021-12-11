#include "SavablePrimaryDataAsset.h"

USavablePrimaryDataAsset::USavablePrimaryDataAsset() {
    this->BuildRestrictions = 0;
    this->PlatformRestrictions = 0;
    this->EnableDangerousSaveGameIDEditing = false;
    this->BuildRestriction = NULL;
}

