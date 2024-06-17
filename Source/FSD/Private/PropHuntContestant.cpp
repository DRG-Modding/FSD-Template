#include "PropHuntContestant.h"
#include "Net/UnrealNetwork.h"

UPropHuntContestant::UPropHuntContestant(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPropHuntContestant::OnRep_State() {
}

void UPropHuntContestant::OnPlayerStateChanged(ECharacterState InState) {
}

void UPropHuntContestant::OnPlayerPassedOut(APlayerCharacter* InPlayer) {
}

void UPropHuntContestant::OnPlayerDestroyed(AActor* InActor) {
}

void UPropHuntContestant::OnPlayerCameraChanged(ECharacterCameraMode OldMode, ECharacterCameraMode NewMode) {
}

void UPropHuntContestant::OnItemUnequipped(AItem* InItem) {
}

int32 UPropHuntContestant::GetRemainingLives() const {
    return 0;
}

EPropHuntRole UPropHuntContestant::GetPropHuntRole() const {
    return EPropHuntRole::PendingRole;
}

int32 UPropHuntContestant::GetMaxLives() const {
    return 0;
}

void UPropHuntContestant::Client_ShowEndScreen_Implementation(EPropHuntEndScreen EndScreenType, bool GameWon) {
}

void UPropHuntContestant::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPropHuntContestant, State);
}


