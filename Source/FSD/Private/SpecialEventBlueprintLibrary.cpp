#include "SpecialEventBlueprintLibrary.h"

class UObject;
class USchematic;
class UPlayerCharacterID;

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

USchematic* USpecialEventBlueprintLibrary::FindRandomSchematicForCharacter(UObject* WorldContextObject, UPlayerCharacterID* characterID, ESchematicType SchematicType) {
    return NULL;
}

void USpecialEventBlueprintLibrary::ClearPendingReward(UObject* WorldContextObject) {
}

USpecialEventBlueprintLibrary::USpecialEventBlueprintLibrary() {
}

