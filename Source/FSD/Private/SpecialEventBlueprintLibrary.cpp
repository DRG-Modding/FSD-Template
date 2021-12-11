#include "SpecialEventBlueprintLibrary.h"

class UObject;
class USchematic;

USchematic* USpecialEventBlueprintLibrary::TryGivePendingReward(UObject* WorldContextObject) {
    return NULL;
}

void USpecialEventBlueprintLibrary::StorePendingReward(UObject* WorldContextObject, const TArray<USchematic*>& schematicsToChooseFrom) {
}

void USpecialEventBlueprintLibrary::SpawnEventRewardFrame(UObject* WorldContextObject, FVector Location) {
}

bool USpecialEventBlueprintLibrary::HasPendingReward(UObject* WorldContextObject) {
    return false;
}

TArray<USchematic*> USpecialEventBlueprintLibrary::GetSpecialEventsRewardSchematics(UObject* WorldContextObject) {
    return TArray<USchematic*>();
}

void USpecialEventBlueprintLibrary::ClearPendingReward(UObject* WorldContextObject) {
}

USpecialEventBlueprintLibrary::USpecialEventBlueprintLibrary() {
}

