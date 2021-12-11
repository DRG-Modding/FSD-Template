#include "HUDVisibilityGroup.h"

class UHUDVisibilityGroup;
class UWidget;

void UHUDVisibilityGroup::SetModeFromPreset(EHUDVisibilityPresets Preset) {
}

void UHUDVisibilityGroup::SetMode(EHUDVisibilityMode InMode) {
}

void UHUDVisibilityGroup::SetHudGroupDynamicallyVisible(UHUDVisibilityGroup* Group, bool IsVisible) {
}

void UHUDVisibilityGroup::SetGroupDynamicallyVisible(bool IsVisible) {
}

void UHUDVisibilityGroup::RegisterWidgetWithVisibilityGroup(UWidget* Widget, UHUDVisibilityGroup* Group, ESlateVisibility VisibleMode, ESlateVisibility HiddenMode) {
}

void UHUDVisibilityGroup::RegisterMultipleWidgetsWithVisibilityGroup(TArray<UWidget*> Widgets, UHUDVisibilityGroup* Group, ESlateVisibility VisibleMode, ESlateVisibility HiddenMode) {
}

bool UHUDVisibilityGroup::IsModeAllowed(EHUDVisibilityMode InMode) const {
    return false;
}

bool UHUDVisibilityGroup::IsInDynamicMode() const {
    return false;
}

bool UHUDVisibilityGroup::IsHudGroupVisible(UHUDVisibilityGroup* Group) {
    return false;
}

bool UHUDVisibilityGroup::IsGroupVisible() const {
    return false;
}

EHUDVisibilityMode UHUDVisibilityGroup::GetMode() const {
    return EHUDVisibilityMode::Visible;
}

TArray<EHUDVisibilityMode> UHUDVisibilityGroup::GetAllowedModes() const {
    return TArray<EHUDVisibilityMode>();
}

UHUDVisibilityGroup::UHUDVisibilityGroup() {
    this->GroupID = EHUDVisibilityGroups::OnScreenHelp;
    this->AllowDynamicMode = false;
    this->AllowHiddenMode = true;
    this->bDynamicallyVisible = false;
    this->RecommendedMode = EHUDVisibilityMode::Visible;
    this->MinimalMode = EHUDVisibilityMode::Visible;
}

