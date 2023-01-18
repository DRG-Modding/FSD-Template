#include "EnemyPawn.h"
#include "EnemyComponent.h"
#include "EnemyHealthComponent.h"
#include "EnemyPawnAfflictionComponent.h"
#include "Net/UnrealNetwork.h"
#include "PawnStatsComponent.h"


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

