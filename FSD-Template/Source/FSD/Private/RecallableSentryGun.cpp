#include "RecallableSentryGun.h"
#include "Net/UnrealNetwork.h"


void ARecallableSentryGun::OnRep_SentryIndex() {
}




void ARecallableSentryGun::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARecallableSentryGun, SentryIndex);
}

ARecallableSentryGun::ARecallableSentryGun() {
    this->SentryIndex = 0;
}

