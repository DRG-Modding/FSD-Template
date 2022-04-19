#pragma once
#include "CoreMinimal.h"
#include "Components/SceneCaptureComponent2D.h"
#include "ShowroomSceneCaptureComponent.generated.h"

class UShowroomCameraKey;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UShowroomSceneCaptureComponent : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UShowroomCameraKey* CameraKey;
    
    UShowroomSceneCaptureComponent();
};

