#include "AmberEvent.h"
#include "DamageComponent.h"
#include "Net/UnrealNetwork.h"

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

