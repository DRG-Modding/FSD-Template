#include "MusicManager.h"

class UMusicLibrary;
class UMusicCategory;
class USoundBase;

void UMusicManager::StopHandle(FMusicHandle Handle) {
}

void UMusicManager::StopCategory(UMusicCategory* Category) {
}

void UMusicManager::SetIsPaused(bool IsPaused) {
}

FMusicHandle UMusicManager::PlayLibrary(UMusicLibrary* library) {
    return FMusicHandle{};
}

FMusicHandle UMusicManager::Play(USoundBase* Music, UMusicCategory* Category) {
    return FMusicHandle{};
}

UMusicManager::UMusicManager() {
}

