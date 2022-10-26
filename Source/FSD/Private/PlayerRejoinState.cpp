#include "PlayerRejoinState.h"

void UPlayerRejoinState::Server_Reset_Implementation() {
}
bool UPlayerRejoinState::Server_Reset_Validate() {
    return true;
}

void UPlayerRejoinState::Server_AddIntValue_Internal_Implementation(const FGuid& ItemKey, const FName& ValueKey, int32 Value) {
}

void UPlayerRejoinState::Server_AddFloatValue_Internal_Implementation(const FGuid& ItemKey, const FName& ValueKey, float Value) {
}

void UPlayerRejoinState::Client_SetValues_Implementation(const TArray<FRejoinFloat>& floatValues, const TArray<FRejoinInt>& intValues) {
}

UPlayerRejoinState::UPlayerRejoinState() {
}

