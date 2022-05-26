#include "EnemyDeepPathfinderCharacter.h"
#include "Net/UnrealNetwork.h"
#include "EnemyHealthComponent.h"

class UMeshComponent;
class UMaterialInterface;

void AEnemyDeepPathfinderCharacter::SwitchToDynamicBaseShader(UMaterialInterface* baseShader, UMeshComponent* MeshComponent) const {
}

void AEnemyDeepPathfinderCharacter::OnRep_QueuedMontage() {
}

void AEnemyDeepPathfinderCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEnemyDeepPathfinderCharacter, QueuedMontage);
}

AEnemyDeepPathfinderCharacter::AEnemyDeepPathfinderCharacter() {
    this->HealthComponent = CreateDefaultSubobject<UEnemyHealthComponent>(TEXT("HealthComponent"));
}

