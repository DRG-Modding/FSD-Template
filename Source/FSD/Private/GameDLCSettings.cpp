#include "GameDLCSettings.h"

class UGameDLC;
class UObject;

TArray<UGameDLC*> UGameDLCSettings::GetStoreDLCs(UObject* WorldContext) {
    return TArray<UGameDLC*>();
}

TArray<UGameDLC*> UGameDLCSettings::GetAnnouncableDLCs(UObject* WorldContext) {
    return TArray<UGameDLC*>();
}

UGameDLCSettings::UGameDLCSettings() {
}

