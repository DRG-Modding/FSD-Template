#include "WindowManager.h"
#include "Templates/SubclassOf.h"

class UUserWidget;
class UWindowWidget;

void UWindowManager::SetSingletonWidgetVisibility(TSubclassOf<UUserWidget> WidgetClass, ESlateVisibility Visibility) {
}

void UWindowManager::ReplaceWindow(UWindowWidget* Window) {
}

UWindowWidget* UWindowManager::OpenWindowFromClass(TSubclassOf<UWindowWidget> windowClass, int32 ZOrder, bool ShowCursor) {
    return NULL;
}

void UWindowManager::OpenWindow(UWindowWidget* Window, bool PlayAudio, bool ShowCursor) {
}

UWindowWidget* UWindowManager::OpenSingleUseWindow(TSubclassOf<UWindowWidget> windowClass, int32 ZOrder) {
    return NULL;
}

bool UWindowManager::IsWindowOpen(UWindowWidget* Window) const {
    return false;
}

bool UWindowManager::IsTopWindow(UWindowWidget* Window) const {
    return false;
}

UUserWidget* UWindowManager::GetOrCreateSingletonWidget(TSubclassOf<UUserWidget> WidgetClass, bool& WidgetCreated) {
    return NULL;
}

UWindowWidget* UWindowManager::GetCurrentWindow() const {
    return NULL;
}

void UWindowManager::CloseWindow(UWindowWidget* Window) {
}

void UWindowManager::CloseTopWindow() {
}

void UWindowManager::CloseAllWindows() {
}

void UWindowManager::CenterCursor() {
}

bool UWindowManager::AnyWindowsOpen() const {
    return false;
}

UWindowManager::UWindowManager() {
    this->AudioWindowOpen = NULL;
    this->ResolutionDownscaleActive = false;
}

