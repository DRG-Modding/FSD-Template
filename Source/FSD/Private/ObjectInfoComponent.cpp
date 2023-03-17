#include "ObjectInfoComponent.h"

bool UObjectInfoComponent::HasMissionControlLookAtShout(const UPrimitiveComponent* TargetComponent) const {
    return false;
}

UDialogDataAsset* UObjectInfoComponent::GetMissionControlLookAtShout(const UPrimitiveComponent* TargetComponent) const {
    return NULL;
}

UDialogDataAsset* UObjectInfoComponent::GetLookAtShout(const UPrimitiveComponent* TargetComponent) const {
    return NULL;
}

bool UObjectInfoComponent::GetIsPingableByLaserpointer(const UPrimitiveComponent* TargetComponent) const {
    return false;
}

FText UObjectInfoComponent::GetInGameName(const UPrimitiveComponent* TargetComponent) const {
    return FText::GetEmpty();
}

FLinearColor UObjectInfoComponent::GetInGameIconTint(const UPrimitiveComponent* TargetComponent) const {
    return FLinearColor{};
}

UTexture2D* UObjectInfoComponent::GetInGameIcon(const UPrimitiveComponent* TargetComponent) const {
    return NULL;
}

FText UObjectInfoComponent::GetInGameDescription(const UPrimitiveComponent* TargetComponent) const {
    return FText::GetEmpty();
}

UActorContextWidget* UObjectInfoComponent::GetContextWidget(APlayerController* InPlayerController) {
    return NULL;
}

UObjectInfoComponent::UObjectInfoComponent() {
}

