#include "PlayerCharacterFunctionLibrary.h"

UPlayerCharacterFunctionLibrary::UPlayerCharacterFunctionLibrary() {
}

bool UPlayerCharacterFunctionLibrary::SetPlayerVoiceMuted(UObject* WorldContextObject, AFSDPlayerState* PlayerState, bool Mute, bool TrySystemWide, int32 localUserNum) {
    return false;
}

bool UPlayerCharacterFunctionLibrary::IsPlayerVoiceMuted(UObject* WorldContextObject, AFSDPlayerState* PlayerState, int32 localUserNum) {
    return false;
}

APlayerCharacter* UPlayerCharacterFunctionLibrary::GetRandomPlayer(UObject* WorldContextObject, bool MustBeAlive, bool MustNotBeParalyzed) {
    return NULL;
}

APlayerCharacter* UPlayerCharacterFunctionLibrary::GetNearestVisiblePlayer(AActor* from, float MaxDistance, bool MustBeAlive, bool MustNotBeParalyzed) {
    return NULL;
}

APlayerCharacter* UPlayerCharacterFunctionLibrary::GetNearestPlayerToPosition(UObject* WorldContextObject, FVector Position, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool XYOnly) {
    return NULL;
}

APlayerCharacter* UPlayerCharacterFunctionLibrary::GetNearestPlayerFrom(UObject* WorldContext, FVector from, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool XYOnly) {
    return NULL;
}

APlayerCharacter* UPlayerCharacterFunctionLibrary::GetNearestPlayer(AActor* from, float MaxDistance, bool MustBeAlive, bool MustBeUnparalyzed, bool XYOnly) {
    return NULL;
}


