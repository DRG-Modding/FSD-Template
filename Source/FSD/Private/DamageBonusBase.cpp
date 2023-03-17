#include "DamageBonusBase.h"
#include "Templates/SubclassOf.h"

UDamageBonusBase* UDamageBonusBase::AddDamageBonusToComponent(TSubclassOf<UDamageBonusBase> damageBonusClass, UDamageComponent* DamageComponent) {
    return NULL;
}

UDamageBonusBase::UDamageBonusBase() {
    this->Condition = NULL;
}

