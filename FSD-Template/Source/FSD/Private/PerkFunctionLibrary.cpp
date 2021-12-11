#include "PerkFunctionLibrary.h"
#include "Templates/SubclassOf.h"

class UPerkAsset;
class UObject;
class APlayerCharacter;

void UPerkFunctionLibrary::SplitPerksByUsage(const TArray<UPerkAsset*>& perks, TArray<UPerkAsset*>& OutPassivePerks, TArray<UPerkAsset*>& OutActivePerks) {
}

TArray<UPerkAsset*> UPerkFunctionLibrary::SortPerksByUsage(TArray<UPerkAsset*>& perks) {
    return TArray<UPerkAsset*>();
}

void UPerkFunctionLibrary::GetPerkEquipSlots(UObject* WorldContext, EPerkUsageType InType, TSubclassOf<APlayerCharacter> InCharacterClass, int32& OutAvailableSlots, int32& OutUnavailableSlots, int32& OutPromotionLockedSlots) {
}

TArray<EPerkSlotType> UPerkFunctionLibrary::GetPerkEquipSlotLayout(UObject* WorldContext, EPerkUsageType InType, TSubclassOf<APlayerCharacter> InCharacterClass) {
    return TArray<EPerkSlotType>();
}

TArray<UPerkAsset*> UPerkFunctionLibrary::GetOwnedPerksByType(UObject* WorldContext, EPerkUsageType InType) {
    return TArray<UPerkAsset*>();
}

TArray<UPerkAsset*> UPerkFunctionLibrary::GetOwnedPerks(UObject* WorldContext) {
    return TArray<UPerkAsset*>();
}

FText UPerkFunctionLibrary::FormatRichText(const FText& SourceText, bool UpperCase, const TMap<FString, FString> CharTagMap) {
    return FText::GetEmpty();
}

UPerkFunctionLibrary::UPerkFunctionLibrary() {
}

