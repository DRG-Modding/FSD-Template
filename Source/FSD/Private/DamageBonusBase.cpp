#include "DamageBonusBase.h"
#include "Templates/SubclassOf.h"

UDamageBonusBase::UDamageBonusBase() {
    this->Condition = NULL;
}

UDamageBonusBase* UDamageBonusBase::AddDamageBonusToComponent(TSubclassOf<UDamageBonusBase> damageBonusClass, UDamageComponent* DamageComponent) {
    return NULL;
}


