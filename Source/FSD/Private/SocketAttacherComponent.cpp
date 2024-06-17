#include "SocketAttacherComponent.h"

USocketAttacherComponent::USocketAttacherComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxSocketAttachments = 1;
}

void USocketAttacherComponent::DetachFromSocket() {
}

bool USocketAttacherComponent::AttachToSocket(AActor* aTarget, FName SocketName, bool ShouldAttach) {
    return false;
}


