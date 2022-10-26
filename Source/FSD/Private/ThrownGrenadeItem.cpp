#include "ThrownGrenadeItem.h"
#include "Net/UnrealNetwork.h"


void AThrownGrenadeItem::SetRemainingCooldown(float CoolDown) {
}

void AThrownGrenadeItem::Server_ThrowGrenade_Implementation(const FVector& StartLocation, const float& cookTime) {
}

void AThrownGrenadeItem::Server_SetState_Implementation(EThrownGrenadeItemState itemState) {
}

void AThrownGrenadeItem::Server_Resupply_Implementation(float percentage) {
}

void AThrownGrenadeItem::ResupplyGrenadesAmount(const int32& Amount) {
}

void AThrownGrenadeItem::ResupplyGrenades(float percentage) {
}

TArray<FVector> AThrownGrenadeItem::PredictGrenadePath() {
    return TArray<FVector>();
}

void AThrownGrenadeItem::OnRep_State() {
}

void AThrownGrenadeItem::OnRep_GrenadeCount() {
}

void AThrownGrenadeItem::OnRep_GrenadeClass() {
}

void AThrownGrenadeItem::GrenadeThrowFinished() {
}

void AThrownGrenadeItem::GetPredictedLastPosAndVelocity(FVector& Pos, FVector& Velocity) {
}

float AThrownGrenadeItem::GetGrenadeThrowVelocity() const {
    return 0.0f;
}

FRotator AThrownGrenadeItem::GetGrenadeThrowRotation() const {
    return FRotator{};
}

float AThrownGrenadeItem::GetGrenadeGravity() const {
    return 0.0f;
}

float AThrownGrenadeItem::GetGrenadeDuration() const {
    return 0.0f;
}

void AThrownGrenadeItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AThrownGrenadeItem, Grenades);
    DOREPLIFETIME(AThrownGrenadeItem, State);
    DOREPLIFETIME(AThrownGrenadeItem, GrenadeClass);
    DOREPLIFETIME(AThrownGrenadeItem, CooldownIsDone);
    DOREPLIFETIME(AThrownGrenadeItem, HasRejoinedInitialized);
}

AThrownGrenadeItem::AThrownGrenadeItem() {
    this->FPAnimInstance = NULL;
    this->TPAnimInstance = NULL;
    this->CharacterAnimationSet = NULL;
    this->ThrowAngle = 0.00f;
    this->MaxGrenades = 0;
    this->Grenades = 0;
    this->GrenadeCooldownRemaining = 0.00f;
    this->State = EThrownGrenadeItemState::NotEquipped;
    this->GrenadeClass = NULL;
    this->DefaultGrenadeAnimationSet = NULL;
    this->GrenadeMeshInstance = NULL;
    this->CookSound = NULL;
    this->CooldownIsDone = true;
    this->HasRejoinedInitialized = false;
}

