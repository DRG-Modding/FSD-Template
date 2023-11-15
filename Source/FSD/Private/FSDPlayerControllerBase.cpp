#include "FSDPlayerControllerBase.h"
#include "FSDPlayerCameraManager.h"
#include "WindowManager.h"

AFSDPlayerControllerBase::AFSDPlayerControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraManagerClass = AFSDPlayerCameraManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
    this->bStartWithBlackScreen = true;
    this->WindowManager = CreateDefaultSubobject<UWindowManager>(TEXT("WindowManager"));
}

void AFSDPlayerControllerBase::ToggleAnalogCursor(bool Visible) {
}

void AFSDPlayerControllerBase::StopAspectRatioAxisConstraint() {
}

void AFSDPlayerControllerBase::StartAspectRatioAxisConstraint() {
}


void AFSDPlayerControllerBase::SetHUDVisible(bool IsVisible, EHUDVisibilityReason reason) {
}

void AFSDPlayerControllerBase::Server_Cheat_SwitchCharacter_Implementation(UPlayerCharacterID* NewCharacter) {
}





bool AFSDPlayerControllerBase::IsPlayerBlocked(const FString& UserId) {
    return false;
}

bool AFSDPlayerControllerBase::IsHUDVisibleFlagSet(EHUDVisibilityReason reason) {
    return false;
}


void AFSDPlayerControllerBase::Client_WasKicked_Implementation(EDisconnectReason reason) {
}


