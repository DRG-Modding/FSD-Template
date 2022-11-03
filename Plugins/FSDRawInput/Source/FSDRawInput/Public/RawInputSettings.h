#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "RawInputDeviceConfiguration.h"
#include "RawInputSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Input)
class URawInputSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRawInputDeviceConfiguration> DeviceConfigurations;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegisterDefaultDevice;
    
    URawInputSettings();
};

