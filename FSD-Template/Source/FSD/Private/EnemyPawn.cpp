#include "EnemyPawn.h"
#include "Net/UnrealNetwork.h"


void AEnemyPawn::OnRep_QueuedMontage() {
}


void AEnemyPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEnemyPawn, QueuedMontage);
}

AEnemyPawn::AEnemyPawn() {
}

