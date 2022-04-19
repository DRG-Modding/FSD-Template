#include "AlignEnemyComponent.h"
#include "Net/UnrealNetwork.h"

void UAlignEnemyComponent::SetRotateWhileStationary(bool Value) {
}

void UAlignEnemyComponent::OnRep_RotateWhileStationary() {
}

void UAlignEnemyComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAlignEnemyComponent, RotateWhileStationary);
}

UAlignEnemyComponent::UAlignEnemyComponent() {
    this->RotateWhileStationary = false;
    this->IncludePitch = false;
}

