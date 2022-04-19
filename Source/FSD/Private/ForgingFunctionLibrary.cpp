#include "ForgingFunctionLibrary.h"

class UObject;
class USchematic;

USchematic* UForgingFunctionLibrary::PickForgingMasteryDefaultReward(UObject* WorldContextObject, ESchematicType InType) {
    return NULL;
}

FForgingResult UForgingFunctionLibrary::GiveForgingXP(UObject* WorldContextObject) {
    return FForgingResult{};
}

TArray<USchematic*> UForgingFunctionLibrary::GetOwnedSchematics(UObject* WorldContextObject) {
    return TArray<USchematic*>();
}

void UForgingFunctionLibrary::GetForgingPendingMasteryRewardNewest(UObject* WorldContextObject, bool& OutSuccess, FForgingPendingReward& OutReward) {
}

ESchematicType UForgingFunctionLibrary::GetForgingMasteryRewardType(UObject* WorldContextObject, int32 Level, bool ReturnDefaultIfUnavailable) {
    return ESchematicType::Overclock;
}

ESchematicType UForgingFunctionLibrary::GetForgingMasteryRewardDefaultType(ESchematicType InType) {
    return ESchematicType::Overclock;
}

float UForgingFunctionLibrary::GetForgingLevelProgress(UObject* WorldContextObject) {
    return 0.0f;
}

int32 UForgingFunctionLibrary::GetForgingLevel(UObject* WorldContextObject) {
    return 0;
}

bool UForgingFunctionLibrary::GetForgingHasPendingMasteryRewards(UObject* WorldContextObject) {
    return false;
}

TArray<USchematic*> UForgingFunctionLibrary::GetForgedSchematics(UObject* WorldContextObject) {
    return TArray<USchematic*>();
}

void UForgingFunctionLibrary::ClaimForgingPendingMasteryReward(UObject* WorldContextObject, int32 Level, USchematic* Reward) {
}

UForgingFunctionLibrary::UForgingFunctionLibrary() {
}

