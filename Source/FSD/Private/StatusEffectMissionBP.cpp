#include "StatusEffectMissionBP.h"

class APawn;
class UEnemyDescriptor;

void UStatusEffectMissionBP::OnEnemySpawned(APawn* Pawn, UEnemyDescriptor* descriptor) {
}

UStatusEffectMissionBP::UStatusEffectMissionBP() {
    this->StatusEffect = NULL;
}

