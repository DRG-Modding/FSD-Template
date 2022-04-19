#include "ConsoleOptionsInSaveGame.h"

FConsoleOptionsInSaveGame::FConsoleOptionsInSaveGame() {
    this->SaveGameOptionsValid = false;
    this->bTutorialHintsEnabled = false;
    this->bShowFPS = false;
    this->ShowNetInfoLevel = 0;
    this->FOV = 0.00f;
    this->HeadbobbingScale = 0.00f;
    this->CameraShakeScale = 0.00f;
    this->UIDPIScale = 0.00f;
    this->volumeCharacterVoice = 0.00f;
    this->volumeMaster = 0.00f;
    this->volumeMissionControl = 0.00f;
    this->volumeSFX = 0.00f;
    this->volumeMusic = 0.00f;
    this->bShowSubtitles = false;
    this->InvertMouse = false;
    this->PhotosensitiveMode = false;
    this->bHoldToSprint = false;
    this->bToggleLaserPointer = false;
    this->bToggleTerrainScanner = false;
    this->bUseMouseSmoothing = false;
    this->MouseXSensitivity = 0.00f;
    this->MouseYSensitivity = 0.00f;
    this->bUseSeperateSensitivity = false;
    this->bInvertMouseWheel = false;
    this->bInvertIncapacitatedX_Mouse = false;
    this->bInvertIncapacitatedX_Controller = false;
    this->bInvertFlightControls = false;
    this->bShowUIAnimations = false;
    this->bPlaySoundOnChatMessage = false;
    this->ChatFadeTime = 0.00f;
    this->ForceFeedbackScale = 0.00f;
    this->ChatFontSize = 0;
    this->HDRColorGamma = 0.00f;
    this->ConsoleGraphicsMode = EConsoleGraphicsMode::Fidelity;
    this->SwapControllerThumbsticks = false;
    this->FSDResolutionScale = 0.00f;
    this->UpscalingType = 0;
    this->AmdFsrMode = 0;
    this->NvidiaDlssMode = UDLSSMode::Off;
    this->AmdFsrSharpness = 0.00f;
    this->NvidiaDlssSharpness = 0.00f;
}

