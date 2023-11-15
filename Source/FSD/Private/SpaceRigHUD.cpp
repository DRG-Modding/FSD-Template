#include "SpaceRigHUD.h"

ASpaceRigHUD::ASpaceRigHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->bNotificationQueueActive = false;
}

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


