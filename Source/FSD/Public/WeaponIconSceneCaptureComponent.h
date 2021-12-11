#pragma once
#include "CoreMinimal.h"
#include "Components/SceneCaptureComponent2D.h"
#include "WeaponIconSceneCaptureComponent.generated.h"

class UIconGenerationCameraKey;

UCLASS(EditInlineNew)
class UWeaponIconSceneCaptureComponent : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UIconGenerationCameraKey* CameraKey;
    
    UWeaponIconSceneCaptureComponent();
};

