#include "GameDLCSettings.h"

UGameDLCSettings::UGameDLCSettings() {
}

TArray<UGameDLC*> UGameDLCSettings::GetStoreDLCs(UObject* WorldContext) {
    return TArray<UGameDLC*>();
}

TArray<UGameDLC*> UGameDLCSettings::GetAnnouncableDLCs(UObject* WorldContext) {
    return TArray<UGameDLC*>();
}


