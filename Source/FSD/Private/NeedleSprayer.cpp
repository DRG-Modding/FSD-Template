#include "NeedleSprayer.h"
#include "Components/SceneComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "HitscanComponent.h"
#include "NiagaraComponent.h"


void ANeedleSprayer::OnHit(const FHitResult& Result, bool IsPenetrating) {
}

ANeedleSprayer::ANeedleSprayer() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->SKMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->FireComponent = CreateDefaultSubobject<UHitscanComponent>(TEXT("HitscanComponent"));
    this->OnSpawnedEffectComponent = CreateDefaultSubobject<UHitscanComponent>(TEXT("OnSpawnedEffect"));
    this->MuzzleFlashLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("MuzzleFlash"));
    this->MuzzleFlashParticleSys = CreateDefaultSubobject<UNiagaraComponent>(TEXT("MuzzleFlashNiagara"));
    this->ImpactParticleComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("ImpactNiagara"));
    this->HitscanComponent = NULL;
    this->SoundEnd = NULL;
    this->ReloadAnimation = NULL;
    this->MaxRotations = 15;
    this->LinesPerRotation = 18;
    this->DeployDelay = 0.50f;
    this->LifeTime = 15.00f;
    this->TimeBetweenRotations = 0.06f;
    this->RearmTime = 1.10f;
    this->AvoidCloseOffset = 350.00f;
    this->MaxRearms = 1;
    this->PlayAnimationOnBeginPlay = true;
    this->PlayAnimationOnReload = false;
    this->DrawDebugLines = false;
}

