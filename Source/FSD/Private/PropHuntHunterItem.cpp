#include "PropHuntHunterItem.h"
#include "Net/UnrealNetwork.h"

APropHuntHunterItem::APropHuntHunterItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void APropHuntHunterItem::CameraModeUpdated(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode) {
}

void APropHuntHunterItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APropHuntHunterItem, ContestantComponent);
}


