#include "EnemyDeepPathfinderCharacter.h"
#include "Net/UnrealNetwork.h"

void AEnemyDeepPathfinderCharacter::OnRep_QueuedMontage() {
}

void AEnemyDeepPathfinderCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEnemyDeepPathfinderCharacter, QueuedMontage);
}

AEnemyDeepPathfinderCharacter::AEnemyDeepPathfinderCharacter() {
}

