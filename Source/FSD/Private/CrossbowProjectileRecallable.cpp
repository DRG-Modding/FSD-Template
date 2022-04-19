#include "CrossbowProjectileRecallable.h"
#include "Net/UnrealNetwork.h"

class APlayerCharacter;

void UCrossbowProjectileRecallable::Server_SetRecallTarget_Implementation(APlayerCharacter* Player, const FTransform& startTrans) {
}

void UCrossbowProjectileRecallable::OnRep_SetRecallTarget() {
}

void UCrossbowProjectileRecallable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCrossbowProjectileRecallable, RecallTarget);
    DOREPLIFETIME(UCrossbowProjectileRecallable, StartTransform);
}

UCrossbowProjectileRecallable::UCrossbowProjectileRecallable() {
    this->RecallTarget = NULL;
    this->RecallStartTime = 1.00f;
    this->RecallSpeed = 0.30f;
}

