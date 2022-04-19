#include "InputFunctionLibrary.h"

class APlayerController;
class UTexture2D;

void UInputFunctionLibrary::SetMouseSmoothingOn(bool smoothingOn) {
}

bool UInputFunctionLibrary::IsMouseSmoothingOn() {
    return false;
}

bool UInputFunctionLibrary::IsMouseEventAction(const FPointerEvent& MouseEvent, const FName& ActionName, bool IgnoreCustomBindings) {
    return false;
}

bool UInputFunctionLibrary::IsKeyEventActionAny(const FKeyEvent& KeyEvent, TArray<FName> ActionNames, bool IgnoreCustomBindings) {
    return false;
}

bool UInputFunctionLibrary::IsKeyEventAction(const FKeyEvent& KeyEvent, FName ActionName, bool IgnoreCustomBindings) {
    return false;
}

bool UInputFunctionLibrary::IsAxisMappedToDirectional(FName InActionName, FKey Key, int32 Direction, bool IgnoreCustomBindings) {
    return false;
}

bool UInputFunctionLibrary::IsActionMappedTo(FName InActionName, FKey Key, bool IgnoreCustomBindings) {
    return false;
}

TArray<FKey> UInputFunctionLibrary::GetInputKeysBoundToAction(const FName& ActionName, EKeyBindingAxis Axis, bool IsGamePadKey) {
    return TArray<FKey>();
}

bool UInputFunctionLibrary::GetAxisMapping(FName InActionName, int32 Axis, bool InGamepadKeys, FInputAxisKeyMapping& OutResult) {
    return false;
}

bool UInputFunctionLibrary::GetActionMapping(FName InActionName, bool InGamepadKeys, FInputActionKeyMapping& OutResult) {
    return false;
}

bool UInputFunctionLibrary::FindInputDisplay(const APlayerController* PlayerController, FName InputName, EFSDInputSource InputSource, int32 LayoutIndex, FInputDisplay& OutInputDisplay) {
    return false;
}

UTexture2D* UInputFunctionLibrary::FindActionIcon(FName InActionName, bool InGamepadKeys) {
    return NULL;
}

UInputFunctionLibrary::UInputFunctionLibrary() {
}

