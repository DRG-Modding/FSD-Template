#include "RockEnemiesEvent.h"
#include "Components/SkeletalMeshComponent.h"

class APawn;
class UHealthComponentBase;

void ARockEnemiesEvent::StopPowerupGeneration() {
}

void ARockEnemiesEvent::StartPowerupGeneration() {
}

void ARockEnemiesEvent::SpawnRockEnemies(float Difficulty, const TArray<FVector>& Locations) {
}

void ARockEnemiesEvent::ShowFireEffects_Implementation(int32 selectedBone) {
}

void ARockEnemiesEvent::RockEnemySpawned(APawn* spawnedEnemy) {
}

void ARockEnemiesEvent::RockEnemyDied(UHealthComponentBase* Health) {
}



ARockEnemiesEvent::ARockEnemiesEvent() {
    this->PowerUpClass = NULL;
    this->PowerUpGenerationTime = 10.00f;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->MuzzleEffect = NULL;
    this->PowerUpsPerGeneration = 1;
    this->GruntPointsAward = 1;
    this->TankPointsAward = 2;
    this->RockEnemies = NULL;
}

