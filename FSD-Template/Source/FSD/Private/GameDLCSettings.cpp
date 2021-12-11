#include "GameDLCSettings.h"

class UObject;
class UGameDLC;

TArray<UGameDLC*> UGameDLCSettings::GetStoreDLCs(UObject* WorldContext) {
    return TArray<UGameDLC*>();
}

TArray<UGameDLC*> UGameDLCSettings::GetAnnouncableDLCs(UObject* WorldContext) {
    return TArray<UGameDLC*>();
}

UGameDLCSettings::UGameDLCSettings() {
}

