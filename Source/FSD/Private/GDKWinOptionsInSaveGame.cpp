#include "GDKWinOptionsInSaveGame.h"

FGDKWinOptionsInSaveGame::FGDKWinOptionsInSaveGame() {
    this->SaveGameOptionsValid = false;
    this->ScreenMode = 0;
    this->ResolutionSizeX = 0;
    this->ResolutionSizeY = 0;
    this->bUseVSync = false;
    this->FrameRateLimit = 0.00f;
    this->Sharpening = 0.00f;
    this->AntiAliasingType = 0;
    this->Gamma = 0.00f;
    this->OverallQuality = 0;
    this->ResolutionScale = 0.00f;
    this->TextureQuality = 0;
    this->ShadowQuality = 0;
    this->AntiAliasingQuality = 0;
    this->PostProcessingQuality = 0;
    this->EffectsQuality = 0;
    this->ViewDistanceQuality = 0;
    this->PreventLatejoinCharacterDuplication = false;
    this->UseDefaultAudioOutputDevice = false;
}

