#include "GameModeFunctionLibrary.h"

class UObject;
class AActor;

FTransform UGameModeFunctionLibrary::FindRandomEscapePodLocation(UObject* WorldContextObject) {
    return FTransform{};
}

FTransform UGameModeFunctionLibrary::FindEscapePodLocationAtDistance(UObject* WorldContextObject, float Distance, float aboveDistanceBias, AActor* optionalFrom) {
    return FTransform{};
}

UGameModeFunctionLibrary::UGameModeFunctionLibrary() {
}

