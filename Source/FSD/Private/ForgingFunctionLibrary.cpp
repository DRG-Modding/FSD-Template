#include "ForgingFunctionLibrary.h"

class UObject;
class USchematic;

USchematic* UForgingFunctionLibrary::GiveForginMasteryReward(UObject* WorldContextObject) {
    return NULL;
}

bool UForgingFunctionLibrary::GiveForgingXP(UObject* WorldContextObject) {
    return false;
}

TArray<USchematic*> UForgingFunctionLibrary::GetOwnedSchematicsSorted(UObject* WorldContextObject, bool SmallestFirst, const FForgingFunctionLibraryIsLargerThan& IsLargerThan) {
    return TArray<USchematic*>();
}

TArray<USchematic*> UForgingFunctionLibrary::GetOwnedSchematics(UObject* WorldContextObject) {
    return TArray<USchematic*>();
}

ESchematicType UForgingFunctionLibrary::GetNextForgingMasterRewardType(UObject* WorldContextObject) {
    return ESchematicType::Overclock;
}

int32 UForgingFunctionLibrary::GetForgingXP(UObject* WorldContextObject) {
    return 0;
}

float UForgingFunctionLibrary::GetForgingLevelProgress(UObject* WorldContextObject) {
    return 0.0f;
}

int32 UForgingFunctionLibrary::GetForgingLevel(UObject* WorldContextObject) {
    return 0;
}

TArray<USchematic*> UForgingFunctionLibrary::GetForgedSchematics(UObject* WorldContextObject) {
    return TArray<USchematic*>();
}

TArray<USchematic*> UForgingFunctionLibrary::GetAllSchematicsSorted(UObject* WorldContextObject, bool SmallestFirst, const FForgingFunctionLibraryIsLargerThan& IsLargerThan) {
    return TArray<USchematic*>();
}

TArray<USchematic*> UForgingFunctionLibrary::GetAllSchematics(UObject* WorldContextObject) {
    return TArray<USchematic*>();
}

UForgingFunctionLibrary::UForgingFunctionLibrary() {
}

