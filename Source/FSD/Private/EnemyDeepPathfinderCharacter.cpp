#include "EnemyDeepPathfinderCharacter.h"
#include "EnemyHealthComponent.h"
#include "Net/UnrealNetwork.h"

AEnemyDeepPathfinderCharacter::AEnemyDeepPathfinderCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HealthComponent = CreateDefaultSubobject<UEnemyHealthComponent>(TEXT("HealthComponent"));
}

void AEnemyDeepPathfinderCharacter::SwitchToDynamicBaseShader(UMaterialInterface* baseShader, UMeshComponent* MeshComponent) const {
}

void AEnemyDeepPathfinderCharacter::OnRep_QueuedMontage() {
}

void AEnemyDeepPathfinderCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEnemyDeepPathfinderCharacter, QueuedMontage);
}


