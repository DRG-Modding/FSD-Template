#include "SpaceRigHUD.h"

class UWindowWidget;
class UObject;
class UDialogDataAsset;

void ASpaceRigHUD::SetNotificationQueueActive(bool Inactive) {
}



UWindowWidget* ASpaceRigHUD::QueueWindowClass(TSoftClassPtr<UWindowWidget> InWindowType) {
    return NULL;
}

void ASpaceRigHUD::QueueWindow(UWindowWidget* InWindow) {
}

void ASpaceRigHUD::QueueNotificationObject(UObject* InObject) {
}

void ASpaceRigHUD::QueueMissionShout(TSoftObjectPtr<UDialogDataAsset> InShout) {
}

bool ASpaceRigHUD::IsNotificationQueueEmpty() const {
    return false;
}

UObject* ASpaceRigHUD::DequeueNotificationObject() {
    return NULL;
}

ASpaceRigHUD::ASpaceRigHUD() {
    this->bNotificationQueueActive = false;
}

