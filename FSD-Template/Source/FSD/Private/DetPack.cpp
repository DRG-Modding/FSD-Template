#include "DetPack.h"
#include "Net/UnrealNetwork.h"

class APlayerCharacter;
class UHealthComponentBase;

void ADetPack::UseFearStaggerUpgrades() {
}


void ADetPack::OnRep_IsMoving() {
}

void ADetPack::OnRep_HasExploded() {
}


void ADetPack::OnDetPackPickedUp(APlayerCharacter* User, EInputKeys Key) {
}

void ADetPack::OnDetPackDeath(UHealthComponentBase* HealthComponent) {
}

void ADetPack::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADetPack, VisualDamageRadius);
    DOREPLIFETIME(ADetPack, HasExploded);
    DOREPLIFETIME(ADetPack, IsMoving);
}

ADetPack::ADetPack() {
    this->UpgradedStaggerChance = 0.00f;
    this->UpgradedStaggerDuration = 0.00f;
    this->UpgradedFearFactor = 0.00f;
    this->VisualDamageRadius = 0.00f;
    this->IncreasedFearRadius = 0.00f;
    this->IncreasedStaggerRadius = 0.00f;
    this->Detonator = NULL;
    this->HasExploded = false;
    this->IsMoving = true;
    this->ExplodesOnDeath = false;
    this->HasExtraStaggerRadius = false;
    this->HasExtraFearRadius = false;
}

