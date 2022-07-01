#include "SpaceRigBar.h"
#include "Net/UnrealNetwork.h"
#include "Components/BoxComponent.h"
#include "InstantUsable.h"

class UDrinkableDataAsset;
class APlayerCharacter;

void ASpaceRigBar::SpawnDrinkables(UDrinkableDataAsset* Drinkable, APlayerCharacter* User) {
}





void ASpaceRigBar::PayTip(APlayerCharacter* Character, int32 Credits) {
}

void ASpaceRigBar::OnRep_DrinkableSpecial() {
}

bool ASpaceRigBar::HasUnclaimedDrinkables() const {
    return false;
}

bool ASpaceRigBar::HasSpaceForMoreDrinkables() const {
    return false;
}

int32 ASpaceRigBar::GetAvailableDrinkableSlots() const {
    return 0;
}

void ASpaceRigBar::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASpaceRigBar, DrinkableSpecial);
}

ASpaceRigBar::ASpaceRigBar() {
    this->BarUsable = CreateDefaultSubobject<UInstantUsable>(TEXT("BarUsable"));
    this->BarUsableCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BarUsableColiider"));
    this->BarMenuWidget = NULL;
    this->DrinkServingLocations.AddDefaulted(4);
    this->DrinkableSpecial = NULL;
}

