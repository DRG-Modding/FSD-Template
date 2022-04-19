#include "SaveGameLibrary.h"

class UObject;

bool USaveGameLibrary::TryGetSaveGameSnapShot(UObject* WorldContext, const FString& Filename, int32 userIdx, FSaveGameSnapShot& OutSnapShot) {
    return false;
}

TMap<FString, FDateTime> USaveGameLibrary::GetUserSaveGameSlots(const FString& UserId) {
    return TMap<FString, FDateTime>();
}

TMap<FString, FDateTime> USaveGameLibrary::GetAllSaveGameSlots() {
    return TMap<FString, FDateTime>();
}

USaveGameLibrary::USaveGameLibrary() {
}

