#include "StickyFlame.h"
#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Net/UnrealNetwork.h"
#include "StatusEffectTriggerComponent.h"

void AStickyFlame::OnRep_IsActive() {
}

void AStickyFlame::OnExtinguisFlame() {
}

void AStickyFlame::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStickyFlame, IsActive);
}

AStickyFlame::AStickyFlame() {
    this->FlameParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FlameParticles"));
    this->audio = CreateDefaultSubobject<UAudioComponent>(TEXT("audio"));
    this->StatusTriggerComponent = CreateDefaultSubobject<UStatusEffectTriggerComponent>(TEXT("StatusEffectTrigger"));
    this->FlameLifetime = 0.00f;
    this->FlameExtinguishTime = 1.50f;
    this->AudioFadeOutTime = 0.00f;
    this->IsActive = true;
}

