#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CustomKeySetting.h"
#include "KeyBindingSettings.generated.h"

UCLASS(BlueprintType)
class UKeyBindingSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FCustomKeySetting> KeyboardMouseButtons;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FCustomKeySetting> ControllerButtons;
    
public:
    UKeyBindingSettings();
};

