#include "BasicPistol.h"

class UHealthComponentBase;
class UPrimitiveComponent;
class UFSDPhysicalMaterial;

void ABasicPistol::OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial) {
}

ABasicPistol::ABasicPistol() {
    this->ConsecutiveHitsDamageBonus = 0.00f;
    this->ConsecutiveHitsMaxBonus = 6.00f;
}

