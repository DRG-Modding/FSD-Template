#include "ObjectInfoComponent.h"

class APlayerController;
class UPrimitiveComponent;
class UTexture2D;
class UDialogDataAsset;
class UActorContextWidget;

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

