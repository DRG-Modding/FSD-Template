#include "EnemyPawn.h"
#include "Net/UnrealNetwork.h"
#include "EnemyHealthComponent.h"
#include "PawnStatsComponent.h"
#include "EnemyPawnAfflictionComponent.h"
#include "EnemyComponent.h"


void AEnemyPawn::OnRep_QueuedMontage() {
}


void AEnemyPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEnemyPawn, QueuedMontage);
}

AEnemyPawn::AEnemyPawn() {
    this->Health = CreateDefaultSubobject<UEnemyHealthComponent>(TEXT("Health"));
    this->Stats = CreateDefaultSubobject<UPawnStatsComponent>(TEXT("Stats"));
    this->Affliction = CreateDefaultSubobject<UEnemyPawnAfflictionComponent>(TEXT("Affliction"));
    this->enemy = CreateDefaultSubobject<UEnemyComponent>(TEXT("enemy"));
}

