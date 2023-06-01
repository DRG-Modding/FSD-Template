#include "LoadoutFunctionLibrary.h"

void ULoadoutFunctionLibrary::SetCurrLoadout(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, FLoadoutCopy newLoadout) {
}

void ULoadoutFunctionLibrary::RandomizeWeaponLoadout(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, int32 loadoutIndex) {
}

void ULoadoutFunctionLibrary::RandomizeAllRandomWeaponLoadout(APlayerCharacter* Player) {
}

FLoadoutCopy ULoadoutFunctionLibrary::GetCurrentLoadout(UObject* WorldContextObject, UPlayerCharacterID* PlayerId) {
    return FLoadoutCopy{};
}

void ULoadoutFunctionLibrary::CopyPasteWeaponLoadout(UObject* WorldContextObject, UPlayerCharacterID* PlayerId, int32 fromIndex, int32 toIndex) {
}

ULoadoutFunctionLibrary::ULoadoutFunctionLibrary() {
}

