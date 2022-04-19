#include "CrossbowProjectileMagnetic.h"
#include "Net/UnrealNetwork.h"

void UCrossbowProjectileMagnetic::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCrossbowProjectileMagnetic, TargetEnemy);
}

UCrossbowProjectileMagnetic::UCrossbowProjectileMagnetic() {
    this->OverlapCheckSize = 300.00f;
}

