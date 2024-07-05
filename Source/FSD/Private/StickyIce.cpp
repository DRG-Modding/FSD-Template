#include "StickyIce.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"
#include "SimpleHealthComponent.h"

AStickyIce::AStickyIce(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VisualRoot = CreateDefaultSubobject<USceneComponent>(TEXT("VisualRoot"));
    this->Health = CreateDefaultSubobject<USimpleHealthComponent>(TEXT("Health"));
    this->MaxIntegrity = 0.00f;
    this->HeatDamageModifier = 1.00f;
    this->IntegrityLossOnSTETrigger = 0.00f;
    this->Integrity = 0.00f;
    this->IntegrityModifier = 0.00f;
    this->VisualRoot->SetupAttachment(RootComponent);
}

void AStickyIce::StartMelting() {
}

void AStickyIce::OnSTETriggered(AActor* target_actor, bool entered) {
}

void AStickyIce::OnRep_IntegrityModifier() {
}


void AStickyIce::OnHit(float Damage, const FDamageData& DamageData, bool anyHealthLost) {
}

void AStickyIce::AddToCurrentIntegrity(float Value, bool predictable) {
}

void AStickyIce::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStickyIce, IntegrityModifier);
}


