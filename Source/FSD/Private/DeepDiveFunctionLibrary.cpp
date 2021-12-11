#include "DeepDiveFunctionLibrary.h"

class UObject;
class UDeepDive;
class UDeepDiveTemplate;

bool UDeepDiveFunctionLibrary::IsDeepDiveElite(UObject* WorldContextObject, UDeepDive* DeepDive) {
    return false;
}

bool UDeepDiveFunctionLibrary::GetHasEverCompletedDeepDive(UObject* WorldContextObject, UDeepDiveTemplate* DeepDive) {
    return false;
}

UDeepDiveFunctionLibrary::UDeepDiveFunctionLibrary() {
}

