#include "ParasiteEnemy.h"

class UHealthComponentBase;

void AParasiteEnemy::OnSelfDeath(UHealthComponentBase* aHealthComponent) {
}

AParasiteEnemy::AParasiteEnemy() {
    this->deathParticles = NULL;
    this->deathSound = NULL;
}

