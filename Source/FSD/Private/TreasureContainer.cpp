#include "TreasureContainer.h"
#include "Net/UnrealNetwork.h"
#include "Components/SceneComponent.h"
#include "OncePerPlayerUsableComponent.h"

class APlayerCharacter;

void ATreasureContainer::TestAwardTreasure() {
}

void ATreasureContainer::SetPreventFurtherLatejoiners(bool prevent) {
}

void ATreasureContainer::SetCanCollectTreasure(bool canCollect) {
}

void ATreasureContainer::OnRep_LastJoiner() {
}

void ATreasureContainer::OnRep_Collectors() {
}

void ATreasureContainer::OnPlayerLatejoined(APlayerCharacter* joiner) {
}

void ATreasureContainer::OnPlayerCollectedTreasure(APlayerCharacter* collector, EInputKeys Key) {
}




bool ATreasureContainer::GetPreventFurtherLatejoiners() const {
    return false;
}

void ATreasureContainer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATreasureContainer, Collectors);
    DOREPLIFETIME(ATreasureContainer, LastJoiner);
}

ATreasureContainer::ATreasureContainer() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->CollectUsable = CreateDefaultSubobject<UOncePerPlayerUsableComponent>(TEXT("CollectUsable"));
    this->AquisitionSource = NULL;
    this->LastJoiner = NULL;
    this->TreasureRewarder = NULL;
    this->PreventLatejoiners = false;
}

