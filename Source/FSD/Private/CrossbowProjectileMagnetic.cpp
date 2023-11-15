#include "CrossbowProjectileMagnetic.h"
#include "Net/UnrealNetwork.h"

UCrossbowProjectileMagnetic::UCrossbowProjectileMagnetic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->OverlapCheckSize = 300.00f;
}

void UCrossbowProjectileMagnetic::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCrossbowProjectileMagnetic, TargetEnemy);
}


