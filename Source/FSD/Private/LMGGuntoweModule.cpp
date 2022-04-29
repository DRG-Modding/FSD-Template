#include "LMGGuntoweModule.h"
#include "Net/UnrealNetwork.h"
#include "HitscanComponent.h"
#include "DamageComponent.h"
#include "Components/SceneComponent.h"
#include "Components/AudioComponent.h"

void ALMGGuntoweModule::ShowShot(const FVector& Location) {
}

void ALMGGuntoweModule::OnRep_IsFiresoundPlaying() {
}

void ALMGGuntoweModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALMGGuntoweModule, IsFiresoundPlaying);
}

ALMGGuntoweModule::ALMGGuntoweModule() {
    this->HitScanComp = CreateDefaultSubobject<UHitscanComponent>(TEXT("HitComponent"));
    this->DamageComp = CreateDefaultSubobject<UDamageComponent>(TEXT("DMGComponent"));
    this->AimAtWhenNoTarget = CreateDefaultSubobject<USceneComponent>(TEXT("AimAtWhenNoTarget"));
    this->FireAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("FiringAudioComponent"));
    this->TracerEffect = NULL;
    this->MuzzleEffect = NULL;
    this->ShootTailSound = NULL;
    this->BurstSize = 8;
    this->MaxAimOffset = 300.00f;
    this->IdleAimRotationSpeed = 10.00f;
    this->TimeBetweenShots = 0.25f;
    this->TimeBetweenBursts = 1.00f;
    this->AimSpeed = 3.00f;
    this->IsFiresoundPlaying = false;
}

