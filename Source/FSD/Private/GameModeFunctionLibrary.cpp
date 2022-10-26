#include "GameModeFunctionLibrary.h"

class UObject;
class USeamlessTravelEventKey;
class AActor;

FTransform UGameModeFunctionLibrary::FindRandomEscapePodLocation(UObject* WorldContextObject) {
    return FTransform{};
}

FTransform UGameModeFunctionLibrary::FindEscapePodLocationAtDistance(UObject* WorldContextObject, float Distance, float aboveDistanceBias, AActor* optionalFrom) {
    return FTransform{};
}

void UGameModeFunctionLibrary::AddSeamlessTravelEventKey(UObject* WorldContextObject, USeamlessTravelEventKey* Key) {
}

UGameModeFunctionLibrary::UGameModeFunctionLibrary() {
}

