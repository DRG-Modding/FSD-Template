#pragma once
#include "CoreMinimal.h"
#include "Components/SceneCaptureComponent2D.h"
#include "ShowroomSceneCaptureComponent.generated.h"

class UShowroomCameraKey;

UCLASS(EditInlineNew)
class UShowroomSceneCaptureComponent : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UShowroomCameraKey* CameraKey;
    
    UShowroomSceneCaptureComponent();
};

