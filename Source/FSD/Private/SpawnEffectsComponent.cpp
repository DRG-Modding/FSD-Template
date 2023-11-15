#include "SpawnEffectsComponent.h"
#include "Net/UnrealNetwork.h"

USpawnEffectsComponent::USpawnEffectsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BiomeMaterialOverride = NULL;
}

void USpawnEffectsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USpawnEffectsComponent, ActiveEffects);
}


