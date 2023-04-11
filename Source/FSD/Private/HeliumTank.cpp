#include "HeliumTank.h"
#include "Net/UnrealNetwork.h"

void AHeliumTank::OnUsedBy(APlayerCharacter* User, EInputKeys Key) {
}

void AHeliumTank::OnShoutStarted(APlayerCharacter* Player, UAudioComponent* audio) {
}

void AHeliumTank::OnRep_PitchedUsers() {
}

void AHeliumTank::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHeliumTank, PitchedUsers);
    DOREPLIFETIME(AHeliumTank, Leader);
}

AHeliumTank::AHeliumTank() {
    this->PitchCurve = NULL;
    this->Leader = NULL;
}

