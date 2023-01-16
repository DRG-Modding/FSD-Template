#pragma once
#include "CoreMinimal.h"
#include "CustomKeySetting.h"
#include "Engine/DataAsset.h"
#include "KeyBindingSettings.generated.h"

UCLASS(Blueprintable)
class UKeyBindingSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomKeySetting> KeyboardMouseButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomKeySetting> ControllerButtons;
    
public:
    UKeyBindingSettings();
};

