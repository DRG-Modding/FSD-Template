#include "AlignEnemyComponent.h"
#include "Net/UnrealNetwork.h"

UAlignEnemyComponent::UAlignEnemyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RotateWhileStationary = false;
    this->IncludePitch = false;
}

void UAlignEnemyComponent::SetRotateWhileStationary(bool Value) {
}

void UAlignEnemyComponent::OnRep_RotateWhileStationary() {
}

void UAlignEnemyComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAlignEnemyComponent, RotateWhileStationary);
}


