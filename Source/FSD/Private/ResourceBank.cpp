#include "ResourceBank.h"
#include "Net/UnrealNetwork.h"

class APlayerCharacter;

void UResourceBank::All_Depositing_Implementation(APlayerCharacter* Character) {
}

void UResourceBank::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UResourceBank, OpenForDeposit);
}

UResourceBank::UResourceBank() {
    this->OpenForDeposit = true;
    this->GameState = NULL;
    this->DepositesPerSecond = 4.00f;
    this->DepositeAmount = 5.00f;
    this->CanGetStrict = false;
    this->AddToTeamInventory = true;
    this->AudioBeginDepositing = NULL;
    this->AudioDepositing = NULL;
    this->AudioEndDepositing = NULL;
}

