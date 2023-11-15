#include "StickyFlame.h"
#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"
#include "StatusEffectTriggerComponent.h"

AStickyFlame::AStickyFlame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->FlameParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FlameParticles"));
    this->audio = CreateDefaultSubobject<UAudioComponent>(TEXT("audio"));
    this->StatusTriggerComponent = CreateDefaultSubobject<UStatusEffectTriggerComponent>(TEXT("StatusEffectTrigger"));
    this->FlameLifetime = 0.00f;
    this->FlameExtinguishTime = 1.50f;
    this->AudioFadeOutTime = 0.00f;
    this->IsActive = true;
    this->FlameParticles->SetupAttachment(RootComponent);
    this->audio->SetupAttachment(RootComponent);
}

void AStickyFlame::OnRep_IsActive() {
}

void AStickyFlame::OnExtinguisFlame() {
}

void AStickyFlame::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStickyFlame, IsActive);
}


