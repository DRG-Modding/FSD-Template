#include "ZipLineStateComponent.h"
#include "Net/UnrealNetwork.h"

void UZipLineStateComponent::ServerSetSpeedBoostActivated_Implementation(bool InBoostActivated) {
}
bool UZipLineStateComponent::ServerSetSpeedBoostActivated_Validate(bool InBoostActivated) {
    return true;
}

void UZipLineStateComponent::ServerJumpPressed_Implementation(bool JumpForward) {
}
bool UZipLineStateComponent::ServerJumpPressed_Validate(bool JumpForward) {
    return true;
}

void UZipLineStateComponent::ServerForwardInputChanged_Implementation(float Input) {
}
bool UZipLineStateComponent::ServerForwardInputChanged_Validate(float Input) {
    return true;
}

void UZipLineStateComponent::ServerChangeDirection_Implementation() {
}
bool UZipLineStateComponent::ServerChangeDirection_Validate() {
    return true;
}



void UZipLineStateComponent::OnRep_ZipLine() {
}

void UZipLineStateComponent::OnPlayerHit(float Damage, const FDamageData& DamageData, bool anyHealthLost) {
}

bool UZipLineStateComponent::GetSpeedBoostActivated() const {
    return false;
}

FVector UZipLineStateComponent::GetJumpVector_Implementation(FVector LookVector, FVector CurrentVelocity) {
    return FVector{};
}

void UZipLineStateComponent::All_SpeedBoostChanged_Implementation(bool bActive) {
}
bool UZipLineStateComponent::All_SpeedBoostChanged_Validate(bool bActive) {
    return true;
}

void UZipLineStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UZipLineStateComponent, ZipLineProjectile);
    DOREPLIFETIME(UZipLineStateComponent, ZipLine);
}

UZipLineStateComponent::UZipLineStateComponent() {
    this->VerticalOffset = -80.00f;
    this->HorizontalOffset = -15.00f;
    this->TravelSpeed = 250.00f;
    this->AccelAndDecelAlpha = 1.00f;
    this->JumpForce = 300.00f;
    this->SpeedBoostActivationDuration = 1.00f;
    this->SpeedBoostActivionMinAngle = 10.00f;
    this->BaseSpeedBoost = 100.00f;
    this->AdditionalSpeedBoostPerAngle = 50.00f;
    this->SpeedBoostCoolDownDuration = 1.00f;
    this->AccelerationAlpha = 1.00f;
    this->DecelerationAlpha = 5.00f;
    this->MinStartDistanceToEnd = 500.00f;
    this->ReleaseDistance = 100.00f;
    this->bCanActivateSpeedBoost = false;
    this->bShowSpeedBoostActivator = false;
    this->SpeedBoostActivationProgress = 0.00f;
    this->AudioOnStart = NULL;
    this->AudioOnDuring = NULL;
    this->AudioOnChangingDirection = NULL;
    this->AudioOnStop = NULL;
    this->AudioOnSpeedBoostActivated = NULL;
    this->ShoutStartUsing = NULL;
    this->ShoutSpeedBoostActivated = NULL;
    this->ZipLineProjectile = NULL;
    this->DamageBeforeFalling = 25.00f;
    this->friendlyFireModifier = 0.50f;
    this->DamageResetTime = 2.00f;
    this->AudioComponent = NULL;
}

