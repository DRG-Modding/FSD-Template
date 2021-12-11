#include "PickaxeFunctionLibrary.h"

class UPickaxePart;
class UObject;
class UItemID;

bool UPickaxeFunctionLibrary::RemovePickaxePartFromOwned(UObject* WorldContextObject, const UPickaxePart* part) {
    return false;
}

bool UPickaxeFunctionLibrary::IsPickaxePartEquipped(UObject* WorldContextObject, EPickaxePartLocation Location, UPickaxePart* part, UItemID* pickaxeID) {
    return false;
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

UPickaxeFunctionLibrary::UPickaxeFunctionLibrary() {
}

