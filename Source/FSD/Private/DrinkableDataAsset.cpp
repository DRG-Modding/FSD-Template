#include "DrinkableDataAsset.h"

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

bool UDrinkableDataAsset::HasSpecialEdition() const {
    return false;
}

UDrinkableDataAsset* UDrinkableDataAsset::GetSpecialEdition(UObject* WorldContext) {
    return NULL;
}

UTexture2D* UDrinkableDataAsset::GetDrinkableIcon() const {
    return NULL;
}

bool UDrinkableDataAsset::AreSpecialDrinksUnlocked(UObject* WorldContext) {
    return false;
}

UDrinkableDataAsset::UDrinkableDataAsset() {
    this->DrinkablePrice = 50;
    this->IsSpecialBeer = false;
    this->RequiredPlayerRank = 0;
    this->ParticipatesInFreeBeerEvent = false;
    this->AlcoholStrength = EDrinkableAlcoholStrength::Regular;
    this->SpecialEdition = NULL;
    this->RequiredDLC = NULL;
    this->bPlayFireworks = false;
    this->StatConsumed = NULL;
    this->StatRoundOrdered = NULL;
    this->OrderShout = NULL;
    this->OrderCheeringShout = NULL;
    this->DrinkSaluteShout = NULL;
    this->buff = NULL;
}

