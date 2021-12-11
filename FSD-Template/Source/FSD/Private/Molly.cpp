#include "Molly.h"
#include "Net/UnrealNetwork.h"

class UDialogDataAsset;
class APlayerCharacter;

void AMolly::SetOpenForDeposit(bool Open) {
}


void AMolly::SetCalledBy(APlayerCharacter* InPlayer) {
}

void AMolly::OnRep_CalledBy() {
}

UDialogDataAsset* AMolly::GetCallingShout_Implementation() const {
    return NULL;
}


void AMolly::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMolly, CalledBy);
}

AMolly::AMolly() {
}

