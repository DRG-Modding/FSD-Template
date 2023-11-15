#include "HeliumTank.h"
#include "Net/UnrealNetwork.h"

AHeliumTank::AHeliumTank(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PitchCurve = NULL;
    this->Leader = NULL;
}

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


