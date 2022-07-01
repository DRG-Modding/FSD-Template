#include "DrinkableDataAsset.h"

class UObject;
class APlayerController;
class APlayerCharacter;
class UTexture2D;
class UDrinkableDataAsset;

bool UDrinkableDataAsset::TryUnlockSpecialDrinks(UObject* WorldContext) {
    return false;
}

bool UDrinkableDataAsset::TryUnlockDrink(UObject* WorldContext) {
    return false;
}

bool UDrinkableDataAsset::TryPurchaseDrink(UObject* WorldContext) {
    return false;
}

void UDrinkableDataAsset::OnRoundOrdered(APlayerCharacter* Character) {
}

bool UDrinkableDataAsset::MustBeUnlocked() const {
    return false;
}

bool UDrinkableDataAsset::IsUnlocked(UObject* WorldContext) const {
    return false;
}

bool UDrinkableDataAsset::IsDrinkFree(UObject* WorldContext) {
    return false;
}

bool UDrinkableDataAsset::HasSupporterEdition() const {
    return false;
}

UTexture2D* UDrinkableDataAsset::GetDrinkableIcon() const {
    return NULL;
}

UDrinkableDataAsset* UDrinkableDataAsset::GetDrinkableEdition(UObject* WorldContext, APlayerController* Player) {
    return NULL;
}

bool UDrinkableDataAsset::AreSpecialDrinksUnlocked(UObject* WorldContext) {
    return false;
}

UDrinkableDataAsset::UDrinkableDataAsset() {
    this->DrinkablePrice = 50;
    this->RequiredPlayerRank = 0;
    this->ParticipatesInFreeBeerEvent = false;
    this->AlcoholStrength = EDrinkableAlcoholStrength::Regular;
    this->SupporterEdition = NULL;
    this->bPlayFireworks = false;
    this->StatConsumed = NULL;
    this->StatRoundOrdered = NULL;
    this->OrderShout = NULL;
    this->OrderCheeringShout = NULL;
    this->DrinkSaluteShout = NULL;
    this->buff = NULL;
}

