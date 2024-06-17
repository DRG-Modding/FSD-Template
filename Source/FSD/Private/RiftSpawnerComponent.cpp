#include "RiftSpawnerComponent.h"
#include "Net/UnrealNetwork.h"

URiftSpawnerComponent::URiftSpawnerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DisallowSpawning = false;
    this->Positioning = NULL;
    this->SpawnInterval = 0.00f;
    this->SpawnDeviation = 0.00f;
    this->InitialSpawnDelay = 0.00f;
    this->SpawnOneAtATime = false;
    this->AmountToSpawn = 0;
    this->RiftClass = NULL;
}

void URiftSpawnerComponent::StopSpawning() {
}

void URiftSpawnerComponent::StartSpawning() {
}

void URiftSpawnerComponent::SpawnRift() {
}

void URiftSpawnerComponent::ReportRiftOpened(AActor* Rift) {
}

void URiftSpawnerComponent::PreFetchSpawnLocations(const FVector& Origin) {
}

void URiftSpawnerComponent::OnRep_Spawned() {
}

TArray<AActor*> URiftSpawnerComponent::GetRifts() {
    return TArray<AActor*>();
}

bool URiftSpawnerComponent::CollectSpawnLocations(const FVector& Origin) {
    return false;
}

void URiftSpawnerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URiftSpawnerComponent, spawned);
}


