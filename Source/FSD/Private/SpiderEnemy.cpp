#include "SpiderEnemy.h"
#include "Net/UnrealNetwork.h"
#include "HitReactionComponent.h"
#include "PawnStatsComponent.h"

class AActor;
class UStaticMeshComponent;

void ASpiderEnemy::SetLookAtTarget(AActor* Target) {
}

void ASpiderEnemy::OnRep_LookAtTarget() {
}

UStaticMeshComponent* ASpiderEnemy::CreateHeadGore() {
    return NULL;
}


void ASpiderEnemy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASpiderEnemy, LookAtTarget);
}

ASpiderEnemy::ASpiderEnemy() {
    this->PawnStats = CreateDefaultSubobject<UPawnStatsComponent>(TEXT("PawnStats"));
    this->HitReactions = CreateDefaultSubobject<UHitReactionComponent>(TEXT("HitReactions"));
    this->GoreMesh = NULL;
    this->ApplyDifficultySpeedModifier = true;
    this->AttackDamageModifier = 1.00f;
    this->LimitRagdollSpeed = false;
    this->MaxRagdollSpeed = 1000.00f;
    this->LookAtTarget = NULL;
}

