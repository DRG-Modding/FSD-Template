#include "BouncyBoomerang.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

void ABouncyBoomerang::OnRep_TargetEnemy(AFSDPawn* lastEnemy) {
}

void ABouncyBoomerang::OnRep_State() {
}

void ABouncyBoomerang::OnRep_RandomSeed() {
}

void ABouncyBoomerang::OnRep_PosVel() {
}

void ABouncyBoomerang::CheckIfCollidingWithTerrain() {
}

void ABouncyBoomerang::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABouncyBoomerang, TargetEnemy);
    DOREPLIFETIME(ABouncyBoomerang, PredictedNextEnemy);
    DOREPLIFETIME(ABouncyBoomerang, RandomSeed);
    DOREPLIFETIME(ABouncyBoomerang, State);
    DOREPLIFETIME(ABouncyBoomerang, PosVel);
}

ABouncyBoomerang::ABouncyBoomerang() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->DamageComponent = NULL;
    this->BouncesLeft = 9;
    this->ConeRange = 2000.00f;
    this->ConeWidth = 50.00f;
    this->BounceRange = 1250.00f;
    this->ToTargetSpeed = 2000.00f;
    this->TurnToTargetSpeed = 3.00f;
    this->PathToDistPercent = 0.50f;
    this->InitialBounceVectorCof = 0.20f;
    this->ArcTimeScale = 1.00f;
    this->GoBackAcceleration = 0.70f;
    this->GoBackHardness = 3.00f;
    this->TerrainCheckUpdateRate = 0.04f;
    this->HitEnemyRange = 50.00f;
    this->HitPlayerRange = 50.00f;
    this->CatchSoundRange = 50.00f;
    this->HitTerrainRange = 175.00f;
    this->EnemyHitNiagaraSystem = NULL;
    this->EnemyHitParticleSystem = NULL;
    this->ImpactSound = NULL;
    this->ReturnCatchSound = NULL;
    this->ThrowBoomerangSound = NULL;
    this->MeshPivot = NULL;
    this->YawPivot = NULL;
    this->MeshRotationRate = 1750.00f;
    this->TargetEnemy = NULL;
    this->PredictedNextEnemy = NULL;
    this->RandomSeed = 0;
    this->State = EBoomerangState::None;
}

