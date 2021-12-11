#include "SpawnEffectsComponent.h"
#include "Net/UnrealNetwork.h"

void USpawnEffectsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USpawnEffectsComponent, ActiveEffects);
}

USpawnEffectsComponent::USpawnEffectsComponent() {
    this->BiomeMaterialOverride = NULL;
}

