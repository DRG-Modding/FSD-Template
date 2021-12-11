#include "GrenadeExplodeOperationData.h"

FGrenadeExplodeOperationData::FGrenadeExplodeOperationData() {
    this->OperationNumber = 0;
    this->NormalOffset = 0.00f;
    this->NormalSqueeze = 0.00f;
    this->Radius = 0.00f;
    this->Noise = 0.00f;
    this->BurnThickness = 0.00f;
    this->UseBulletBurntMaterial = false;
    this->DissolvePlatforms = false;
    this->OverrideBurntMaterialHandle = 0;
}

