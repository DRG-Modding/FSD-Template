#include "VanityMasteryLibrary.h"

class UObject;
class UPlayerCharacterID;

void UVanityMasteryLibrary::ResetVanityMasteryXP(UObject* WorldContext) {
}

void UVanityMasteryLibrary::MarkFashionitesAwardedForOldPurchasesSeen(UObject* WorldContext) {
}

FVanityMasterySettings UVanityMasteryLibrary::GetVanityMasterySettings() {
    return FVanityMasterySettings{};
}

FVanityMasterySave UVanityMasteryLibrary::GetVanityMasterySave(UObject* WorldContext) {
    return FVanityMasterySave{};
}

int32 UVanityMasteryLibrary::GetVanityMasteryFashioniteForLevel(int32 InCurrentLevel) {
    return 0;
}

int32 UVanityMasteryLibrary::GetFashionitesAwaredForOldPurchases(UObject* WorldContext) {
    return 0;
}

float UVanityMasteryLibrary::CalculateVanityMasteryLevelProgress(int32 Level, int32 XP) {
    return 0.0f;
}

FVanityMasteryResult UVanityMasteryLibrary::AddVanityMasteryXPFromCost(UObject* WorldContext, TArray<FCraftingCost> Cost, UPlayerCharacterID* characterID) {
    return FVanityMasteryResult{};
}

FVanityMasteryResult UVanityMasteryLibrary::AddVanityMasteryXP(UObject* WorldContext, int32 XP, UPlayerCharacterID* PlayerId) {
    return FVanityMasteryResult{};
}

UVanityMasteryLibrary::UVanityMasteryLibrary() {
}

