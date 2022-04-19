#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Engine/DeveloperSettings.h"
#include "InputTranslationTable.h"
#include "ActionIconMapping.h"
#include "ControllerIconSettings.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class UControllerIconSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputTranslationTable InputTranslationTable;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionIconMapping> Xbox_KeyIcons;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionIconMapping> Playstation_KeyIcons;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionIconMapping> Playstation5_KeyIcons;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionIconMapping> MouseKeyboard_KeyIcons;
    
public:
    UControllerIconSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindMouseKeyboardKeyIcon(FKey Key, FActionIconMapping& KeyIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindKeyIcon(FKey Key, FActionIconMapping& KeyIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindControllerKeyIcon(FKey Key, FActionIconMapping& KeyIcon);
    
};

