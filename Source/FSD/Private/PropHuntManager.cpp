#include "PropHuntManager.h"
#include "Net/UnrealNetwork.h"

UPropHuntManager::UPropHuntManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPropHuntManager::OnRep_State() {
}

int32 UPropHuntManager::GetActiveProps() const {
    return 0;
}

int32 UPropHuntManager::GetActiveHunters() const {
    return 0;
}

void UPropHuntManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPropHuntManager, State);
}


