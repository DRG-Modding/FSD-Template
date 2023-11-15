#include "RecallableSentryGun.h"
#include "Net/UnrealNetwork.h"

ARecallableSentryGun::ARecallableSentryGun(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SentryIndex = 0;
}


void ARecallableSentryGun::OnRep_SentryIndex() {
}




void ARecallableSentryGun::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARecallableSentryGun, SentryIndex);
}


