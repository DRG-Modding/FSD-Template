#include "GameDLC.h"

class UTexture2D;
class UObject;

bool UGameDLC::ShouldBeAnnounced(UObject* WorldContext) const {
    return false;
}

bool UGameDLC::OpenStorePage(UObject* WorldContext) {
    return false;
}

void UGameDLC::MarkAnnounced(UObject* WorldContext) {
}

FString UGameDLC::GetSonyAdditionalContentId() const {
    return TEXT("");
}

UTexture2D* UGameDLC::GetBanner_16_9() const {
    return NULL;
}

UTexture2D* UGameDLC::GetBanner() const {
    return NULL;
}

UGameDLC::UGameDLC() {
    this->SteamID = 0;
    this->ShowOnDLCScreen = true;
    this->PerformancePoints = 0;
}

