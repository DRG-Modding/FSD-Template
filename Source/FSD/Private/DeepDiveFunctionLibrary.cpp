#include "DeepDiveFunctionLibrary.h"

bool UDeepDiveFunctionLibrary::IsEliteDeepDiveMission(UObject* WorldContextObject, UGeneratedMission* mission) {
    return false;
}

bool UDeepDiveFunctionLibrary::IsEliteDeepDive(UObject* WorldContextObject, UDeepDive* DeepDive) {
    return false;
}

bool UDeepDiveFunctionLibrary::GetHasEverCompletedDeepDive(UObject* WorldContextObject, UDeepDiveTemplate* DeepDive) {
    return false;
}

UDeepDive* UDeepDiveFunctionLibrary::GetDeepDiveFromMission(UObject* WorldContextObject, const UGeneratedMission* mission) {
    return NULL;
}

UDeepDiveFunctionLibrary::UDeepDiveFunctionLibrary() {
}

