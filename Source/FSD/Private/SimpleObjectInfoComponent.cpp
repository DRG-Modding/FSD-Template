#include "SimpleObjectInfoComponent.h"

class UActorContextWidget;
class UDialogDataAsset;
class USceneComponent;

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
    this->bIsPingableByLaserpointer = false;
    this->ContextWidgetClass = NULL;
    this->ContextWidget = NULL;
}

