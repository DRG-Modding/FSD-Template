#include "WidgetToRenderTargetComponent.h"

class UUserWidget;
class ULocalPlayer;
class UTextureRenderTarget2D;
class UMaterialInstanceDynamic;

void UWidgetToRenderTargetComponent::SetWidget(UUserWidget* NewWidget) {
}

void UWidgetToRenderTargetComponent::SetOwnerPlayer(ULocalPlayer* LocalPlayer) {
}

void UWidgetToRenderTargetComponent::SetBackgroundColor(const FLinearColor NewBackgroundColor) {
}

void UWidgetToRenderTargetComponent::RequestRedraw() {
}

UUserWidget* UWidgetToRenderTargetComponent::GetUserWidgetObject() const {
    return NULL;
}

UTextureRenderTarget2D* UWidgetToRenderTargetComponent::GetRenderTarget() const {
    return NULL;
}

ULocalPlayer* UWidgetToRenderTargetComponent::GetOwnerPlayer() const {
    return NULL;
}

UMaterialInstanceDynamic* UWidgetToRenderTargetComponent::GetMaterialInstance() const {
    return NULL;
}

UWidgetToRenderTargetComponent::UWidgetToRenderTargetComponent() {
    this->WidgetClass = NULL;
    this->bManuallyRedraw = false;
    this->bRedrawRequested = true;
    this->RedrawTime = 0.00f;
    this->LastWidgetRenderTime = 0.00f;
    this->bWindowFocusable = true;
    this->bDrawAtDesiredSize = false;
    this->BaseMaterial = NULL;
    this->OwnerPlayer = NULL;
    this->OpacityFromTexture = 1.00f;
    this->bIsTwoSided = false;
    this->TickWhenOffscreen = false;
    this->Widget = NULL;
    this->RenderTarget = NULL;
    this->MaterialInstance = NULL;
    this->bEditTimeUsable = false;
}

