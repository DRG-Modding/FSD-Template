#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "InputTranslationTable.h"
#include "ActionIconMapping.h"
#include "InputCoreTypes.h"
#include "ControllerIconSettings.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class UControllerIconSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FInputTranslationTable InputTranslationTable;
    
protected:
    UPROPERTY(Config, EditAnywhere)
    TArray<FActionIconMapping> Xbox_KeyIcons;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FActionIconMapping> Playstation_KeyIcons;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FActionIconMapping> Playstation5_KeyIcons;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FActionIconMapping> MouseKeyboard_KeyIcons;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindMouseKeyboardKeyIcon(FKey Key, FActionIconMapping& KeyIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindKeyIcon(FKey Key, FActionIconMapping& KeyIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindControllerKeyIcon(FKey Key, FActionIconMapping& KeyIcon);
    
    UControllerIconSettings();
};

