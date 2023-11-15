#include "AmberEvent.h"
#include "DamageComponent.h"
#include "Net/UnrealNetwork.h"

AAmberEvent::AAmberEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EndExplosionDamage = CreateDefaultSubobject<UDamageComponent>(TEXT("ExplosionDamage"));
    this->InitialDelayBeforeSpawn = 0.00f;
    this->MaxSpawnRange = 0.00f;
}

void AAmberEvent::OnSpawnedDeath(UHealthComponentBase* spawnedHealthComponent) {
}

void AAmberEvent::OnEnemySpawned(APawn* Pawn) {
}

void AAmberEvent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAmberEvent, CurrentPool);
}


