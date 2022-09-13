#include "EnemyDeepPathfinderCharacter.h"
#include "Net/UnrealNetwork.h"
#include "EnemyHealthComponent.h"

class UMaterialInterface;
class UMeshComponent;

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

