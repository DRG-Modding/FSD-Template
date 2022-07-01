#include "SimpleObjectInfoComponent.h"

class USceneComponent;
class UTexture2D;
class UActorContextWidget;
class UDialogDataAsset;

void USimpleObjectInfoComponent::SetInGameName_Implementation(const FString& GameName) {
}

void USimpleObjectInfoComponent::SetInGameDescription_Implementation(const FString& GameDescription) {
}

void USimpleObjectInfoComponent::SetContextWidget(UActorContextWidget* InContextWidget) {
}

void USimpleObjectInfoComponent::OverrideLookAtShoutOrUseDefault(UDialogDataAsset* InShout) {
}

void USimpleObjectInfoComponent::OverrideLookAtShout(UDialogDataAsset* InShout) {
}

void USimpleObjectInfoComponent::OverrideIcon(UTexture2D* InTexture) {
}

UDialogDataAsset* USimpleObjectInfoComponent::GetDefaultLookAtShout() const {
    return NULL;
}

void USimpleObjectInfoComponent::ClearLookAtShoutOverride() {
}

void USimpleObjectInfoComponent::AddComponentObjectInfo(USceneComponent* TargetComponent, const FSimpleObjectInfoData& Data) {
}

USimpleObjectInfoComponent::USimpleObjectInfoComponent() {
    this->LookAtShout = NULL;
    this->LookAtShoutOverride = NULL;
    this->Icon = NULL;
    this->IconOverride = NULL;
    this->bIsPingableByLaserpointer = false;
    this->ContextWidgetClass = NULL;
    this->ContextWidget = NULL;
}

