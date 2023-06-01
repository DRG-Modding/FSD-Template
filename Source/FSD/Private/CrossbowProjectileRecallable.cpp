#include "CrossbowProjectileRecallable.h"
#include "Net/UnrealNetwork.h"

void UCrossbowProjectileRecallable::Server_SetRecallTarget_Implementation(APlayerCharacter* Player, const FTransform& startTrans) {
}

void UCrossbowProjectileRecallable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCrossbowProjectileRecallable, RecallTarget);
    DOREPLIFETIME(UCrossbowProjectileRecallable, StartTransform);
    DOREPLIFETIME(UCrossbowProjectileRecallable, IsRecallable);
}

UCrossbowProjectileRecallable::UCrossbowProjectileRecallable() {
    this->Usable = NULL;
    this->RecallTarget = NULL;
    this->RecallStartTime = 1.00f;
    this->RecallSpeed = 0.30f;
    this->FPMeshComponent = NULL;
    this->IsRecallable = false;
}

