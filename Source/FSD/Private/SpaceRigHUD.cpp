#include "SpaceRigHUD.h"

void ASpaceRigHUD::SetNotificationQueueActive(bool Inactive) {
}



void ASpaceRigHUD::QueueWindowClass(TSoftClassPtr<UWindowWidget> InWindowType) {
}

void ASpaceRigHUD::QueueNotificationObject(UObject* InObject) {
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

