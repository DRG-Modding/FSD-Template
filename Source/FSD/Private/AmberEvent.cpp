#include "AmberEvent.h"
#include "Net/UnrealNetwork.h"
#include "DamageComponent.h"

class UHealthComponentBase;
class APawn;

void AAmberEvent::OnSpawnedDeath(UHealthComponentBase* spawnedHealthComponent) {
}

void AAmberEvent::OnEnemySpawned(APawn* Pawn) {
}

void AAmberEvent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAmberEvent, CurrentPool);
}

AAmberEvent::AAmberEvent() {
    this->EndExplosionDamage = CreateDefaultSubobject<UDamageComponent>(TEXT("ExplosionDamage"));
    this->InitialDelayBeforeSpawn = 0.00f;
    this->MaxSpawnRange = 0.00f;
}

