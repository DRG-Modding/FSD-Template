#include "BoscoController.h"

void ABoscoController::ReviveTarget() {
}

void ABoscoController::ResetToFollowState() {
}

void ABoscoController::RegisterPlayer(APlayerCharacter* APlayerCharacter) {
}

void ABoscoController::PickupItem() {
}

void ABoscoController::OnUseDone(int32 TimesUsed) {
}

void ABoscoController::OnSecondaryLaserPointer(const FLaserPointerTarget& HitInfo) {
}

void ABoscoController::OnPlayerShout(APlayerCharacter* APlayerCharacter) {
}

void ABoscoController::OnPlayerSalute(APlayerCharacter* aCharacater) {
}

void ABoscoController::OnPlayerLeave(AFSDPlayerState* APlayerState) {
}

void ABoscoController::OnLaserPointer(const FLaserPointerTarget& HitInfo) {
}

void ABoscoController::OnJobFinished() {
}

void ABoscoController::OnEscortTargetDied(UHealthComponentBase* Health) {
}

void ABoscoController::OnCarriedUsed(APlayerCharacter* usedBy, EInputKeys Key) {
}

FVector ABoscoController::GetPointNearPlayers() const {
    return FVector{};
}

AActor* ABoscoController::GetFollowTarget() {
    return NULL;
}

void ABoscoController::GenerateRelativeLocation(AActor* aTarget, float aRange, float aHeightRestriction, float aMinRange, bool aTryToStayOutOfTheWay, bool aStayBehind) {
}

void ABoscoController::ConfirmPickup() {
}

void ABoscoController::CarriableDrop() {
}

ABoscoController::ABoscoController() {
    this->BehaviourTree = NULL;
    this->CheckOutOfTheWayInterval = 0.00f;
    this->DistCountAsSameHit = 10.00f;
    this->HearthstoneCrystalMaterial = NULL;
    this->SearchForEnemiesInterval = 0.00f;
    this->SaluteDelay = 0.00f;
    this->SaluteCooldown = 0.00f;
    this->CheckGraberInterval = 0.00f;
    this->MaxThrowStrength = 800.00f;
    this->MaxThrowRange = 1600.00f;
    this->RepairRange = 100.00f;
    this->DistanceCountedAsClose = 2000.00f;
    this->ReviveHealthPercentage = 0.40f;
    this->CurrentUse = NULL;
    this->TryingToPickItem = NULL;
}

