#include "PickaxeFunctionLibrary.h"

bool UPickaxeFunctionLibrary::RemovePickaxePartFromOwned(UObject* WorldContextObject, const UPickaxePart* part) {
    return false;
}

void UPickaxeFunctionLibrary::RandomizePickaxe(UObject* WorldContextObject, UPlayerCharacterID* PlayerId) {
}

bool UPickaxeFunctionLibrary::IsPickaxePartEquipped(UObject* WorldContextObject, EPickaxePartLocation Location, UPickaxePart* part, UItemID* pickaxeID) {
    return false;
}

void UPickaxeFunctionLibrary::GivePickaxePart(UObject* WorldContextObject, UPickaxePart* part) {
}

TArray<UPickaxePart*> UPickaxeFunctionLibrary::GetUnlockedPickaxeParts(UObject* WorldContextObject, EPickaxePartLocation Category) {
    return TArray<UPickaxePart*>();
}

TArray<UPickaxePart*> UPickaxeFunctionLibrary::GetPickaxeParts(UObject* WorldContextObject, EPickaxePartLocation Category) {
    return TArray<UPickaxePart*>();
}

bool UPickaxeFunctionLibrary::GetIsPickAxePartAcquired(UObject* WorldContextObject, const UPickaxePart* InPickaxePart) {
    return false;
}

FPickaxeSet UPickaxeFunctionLibrary::GetEquippedPickaxeSet(UObject* WorldContextObject, UItemID* pickaxeID) {
    return FPickaxeSet{};
}

UPickaxePart* UPickaxeFunctionLibrary::GetEquippedPickaxePart(UObject* WorldContextObject, EPickaxePartLocation partLocation, UItemID* pickaxeID) {
    return NULL;
}

void UPickaxeFunctionLibrary::EquipPickaxePart(UObject* WorldContextObject, UPickaxePart* part, EPickaxePartLocation partLocation, UItemID* pickaxeID) {
}

void UPickaxeFunctionLibrary::CopyPastePickaxeLoadout(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, int32 fromIndex, int32 toIndex) {
}

UPickaxeFunctionLibrary::UPickaxeFunctionLibrary() {
}

