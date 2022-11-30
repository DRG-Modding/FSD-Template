#include "PerkFunctionLibrary.h"
#include "Templates/SubclassOf.h"

class UPerkAsset;
class UObject;
class APlayerCharacter;
class UPlayerCharacterID;

void UPerkFunctionLibrary::SplitPerksByUsage(const TArray<UPerkAsset*>& perks, TArray<UPerkAsset*>& OutPassivePerks, TArray<UPerkAsset*>& OutActivePerks) {
}

TArray<UPerkAsset*> UPerkFunctionLibrary::SortPerksByUsage(TArray<UPerkAsset*>& perks) {
    return TArray<UPerkAsset*>();
}

bool UPerkFunctionLibrary::IsPerkTierUnLocked(UObject* WorldContext, int32 Tier) {
    return false;
}

int32 UPerkFunctionLibrary::GetRequiredPerkClaimsForTier(int32 Tier) {
    return 0;
}

void UPerkFunctionLibrary::GetPerkTierState(UObject* WorldContext, int32 Tier, bool& TierUnLocked, int32& NextRequiredCount, int32& NextProgressCount) {
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

int32 UPerkFunctionLibrary::GetHighestPerkTier() {
    return 0;
}

TArray<UPerkAsset*> UPerkFunctionLibrary::GetCharacterNonEquippedPerks(UObject* WorldContext, UPlayerCharacterID* characterID) {
    return TArray<UPerkAsset*>();
}

TArray<UPerkAsset*> UPerkFunctionLibrary::GetCharacterEquippedPerks(UObject* WorldContext, UPlayerCharacterID* characterID) {
    return TArray<UPerkAsset*>();
}

TArray<UPerkAsset*> UPerkFunctionLibrary::GetAvailablePerks() {
    return TArray<UPerkAsset*>();
}

int32 UPerkFunctionLibrary::GetAmountOfPurchasedPerks(UObject* WorldContext) {
    return 0;
}

FText UPerkFunctionLibrary::FormatRichText(const FText& SourceText, bool UpperCase, const TMap<FString, FString> CharTagMap) {
    return FText::GetEmpty();
}

int32 UPerkFunctionLibrary::CalculateClaimablePerkPoints(UObject* WorldContext) {
    return 0;
}

UPerkFunctionLibrary::UPerkFunctionLibrary() {
}

