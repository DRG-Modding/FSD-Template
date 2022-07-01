#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "EKeyBindingAxis.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerInput.h"
#include "EFSDInputSource.h"
#include "InputDisplay.h"
#include "InputFunctionLibrary.generated.h"

class APlayerController;
class UTexture2D;

UCLASS(Blueprintable)
class UInputFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInputFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetMouseSmoothingOn(bool smoothingOn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMouseSmoothingOn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMouseEventAction(const FPointerEvent& MouseEvent, const FName& ActionName, bool IgnoreCustomBindings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsKeyEventActionAny(const FKeyEvent& KeyEvent, TArray<FName> ActionNames, bool IgnoreCustomBindings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsKeyEventAction(const FKeyEvent& KeyEvent, FName ActionName, bool IgnoreCustomBindings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAxisMappedToDirectional(FName InActionName, FKey Key, int32 Direction, bool IgnoreCustomBindings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActionMappedTo(FName InActionName, FKey Key, bool IgnoreCustomBindings);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FKey> GetInputKeysBoundToAction(const FName& ActionName, EKeyBindingAxis Axis, bool IsGamePadKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetAxisMapping(FName InActionName, int32 Axis, bool InGamepadKeys, FInputAxisKeyMapping& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetActionMapping(FName InActionName, bool InGamepadKeys, FInputActionKeyMapping& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool FindInputDisplay(const APlayerController* PlayerController, FName InputName, EFSDInputSource InputSource, int32 LayoutIndex, FInputDisplay& OutInputDisplay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* FindActionIcon(FName InActionName, bool InGamepadKeys);
    
};

