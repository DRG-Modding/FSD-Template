#include "SpaceRigBar.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "InstantUsable.h"
#include "Net/UnrealNetwork.h"

ASpaceRigBar::ASpaceRigBar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->BarUsable = CreateDefaultSubobject<UInstantUsable>(TEXT("BarUsable"));
    this->BarUsableCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BarUsableColiider"));
    this->BarMenuWidget = NULL;
    this->DrinkServingLocations.AddDefaulted(4);
    this->DrinkableSpecial = NULL;
    this->BarUsableCollider->SetupAttachment(RootComponent);
}

void ASpaceRigBar::SpawnDrinkables(UDrinkableDataAsset* Drinkable, APlayerCharacter* User) {
}

void ASpaceRigBar::SetVisibilityOfHolidayMeshes() {
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


