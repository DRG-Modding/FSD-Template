#pragma once
#include "CoreMinimal.h"
#include "Components/SceneCaptureComponent2D.h"
#include "IconSceneCaptureComponent.generated.h"

class UIconGenerationCameraKey;

UCLASS(EditInlineNew)
class UIconSceneCaptureComponent : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UIconGenerationCameraKey* CameraKey;
    
    UIconSceneCaptureComponent();
};

