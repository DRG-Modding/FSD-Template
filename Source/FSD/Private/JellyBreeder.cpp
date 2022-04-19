#include "JellyBreeder.h"
#include "Net/UnrealNetwork.h"

class AProjectile;
class AActor;

void AJellyBreeder::SpawnEnemies(AProjectile* Egg, int32 AmountToSpawn) {
}

void AJellyBreeder::PlaySpawnEggAnim_Implementation() {
}

void AJellyBreeder::OnRep_BreedMode() {
}

void AJellyBreeder::OnJellyDestroyed(AActor* AActor) {
}


void AJellyBreeder::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AJellyBreeder, IsInBreedMode);
}

AJellyBreeder::AJellyBreeder() {
    this->EggSpawnAnimation = NULL;
    this->EggParticles = NULL;
    this->EggSound = NULL;
    this->EnemyToSpawn = NULL;
    this->EggClass = NULL;
    this->TimeBetweenBursts = 0.00f;
    this->TimeBetweenEggs = 0.00f;
    this->CloseToSpawnEggTime = 0.00f;
    this->WeakPointMaterial = NULL;
    this->UnWeakPointMaterial = NULL;
    this->EggBurstSize = 3;
    this->MaxJellies = 25;
    this->MultiplierOnHighPlayerCount = 1.00f;
    this->IsInBreedMode = false;
}

