#include "PlayerCharacterFunctionLibrary.h"

class UObject;
class AFSDPlayerState;
class APlayerCharacter;
class AActor;

bool UPlayerCharacterFunctionLibrary::SetPlayerVoiceMuted(UObject* WorldContextObject, AFSDPlayerState* PlayerState, bool Mute, bool TrySystemWide, int32 localUserNum) {
    return false;
}

bool UPlayerCharacterFunctionLibrary::IsPlayerVoiceMuted(UObject* WorldContextObject, AFSDPlayerState* PlayerState, int32 localUserNum) {
    return false;
}

APlayerCharacter* UPlayerCharacterFunctionLibrary::GetRandomPlayer(UObject* WorldContextObject, bool MustBeAlive, bool MustNotBeParalyzed) {
    return NULL;
}

APlayerCharacter* UPlayerCharacterFunctionLibrary::GetNearestVisiblePlayer(AActor* From, float MaxDistance, bool MustBeAlive, bool MustNotBeParalyzed) {
    return NULL;
}

APlayerCharacter* UPlayerCharacterFunctionLibrary::GetNearestPlayerToPosition(UObject* WorldContextObject, FVector Position, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool XYOnly) {
    return NULL;
}

APlayerCharacter* UPlayerCharacterFunctionLibrary::GetNearestPlayerFrom(UObject* WorldContext, FVector From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool XYOnly) {
    return NULL;
}

APlayerCharacter* UPlayerCharacterFunctionLibrary::GetNearestPlayer(AActor* From, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool XYOnly) {
    return NULL;
}

UPlayerCharacterFunctionLibrary::UPlayerCharacterFunctionLibrary() {
}

