#include "DrinkSettings.h"

class UObject;
class UDrinkableDataAsset;

TArray<UDrinkableDataAsset*> UDrinkSettings::GetBarDrinkables(UObject* WorldContext, bool IncludeDailySpecial, bool includeNotUnlocked, bool includePlayerRankTooLow) {
    return TArray<UDrinkableDataAsset*>();
}

UDrinkableDataAsset* UDrinkSettings::GetBarDailySpecial(UObject* WorldContext) {
    return NULL;
}

UDrinkSettings::UDrinkSettings() {
}

