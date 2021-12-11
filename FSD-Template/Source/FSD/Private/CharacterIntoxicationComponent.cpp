#include "CharacterIntoxicationComponent.h"
#include "Net/UnrealNetwork.h"

class UCurveFloat;
class UDrinkableDataAsset;






bool UCharacterIntoxicationComponent::IsPassOutDrunk() const {
    return false;
}

bool UCharacterIntoxicationComponent::IsOnSpaceRig() const {
    return false;
}

bool UCharacterIntoxicationComponent::IsLocallyControlled() const {
    return false;
}

bool UCharacterIntoxicationComponent::IsDrunk() const {
    return false;
}

bool UCharacterIntoxicationComponent::HasAuthority() const {
    return false;
}

float UCharacterIntoxicationComponent::GetSoberingUpCoolDown() const {
    return 0.0f;
}

float UCharacterIntoxicationComponent::GetIntoxicationProgressMapped(UCurveFloat* Curve) const {
    return 0.0f;
}

float UCharacterIntoxicationComponent::GetIntoxicationProgress() const {
    return 0.0f;
}

int32 UCharacterIntoxicationComponent::GetAlcoholPct_Implementation(EDrinkableAlcoholStrength Strength) const {
    return 0;
}

void UCharacterIntoxicationComponent::Consume(UDrinkableDataAsset* Drinkable) {
}

void UCharacterIntoxicationComponent::ClearIntoxication() {
}

void UCharacterIntoxicationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCharacterIntoxicationComponent, IntoxicationPercent);
}

UCharacterIntoxicationComponent::UCharacterIntoxicationComponent() {
    this->Character = NULL;
    this->CurrentState = EIntoxicationState::NotIntoxicated;
    this->IntoxicationLerpSpeed = 100.00f;
    this->TimeDrunk = 0.00f;
    this->SoberingPercent = 1;
}

