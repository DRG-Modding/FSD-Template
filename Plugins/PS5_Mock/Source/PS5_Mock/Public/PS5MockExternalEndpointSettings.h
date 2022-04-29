#pragma once
#include "CoreMinimal.h"
#include "IAudioEndpoint.h"
#include "PS5MockExternalEndpointSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPS5MockExternalEndpointSettings : public UAudioEndpointSettingsBase {
    GENERATED_BODY()
public:
    UPS5MockExternalEndpointSettings();
};

