#pragma once
#include "CoreMinimal.h"
#include "Components/SceneCaptureComponent2D.h"
#include "EPickaxePartLocation.h"
#include "PickaxeIconSceneCaptureComponent.generated.h"

UCLASS(EditInlineNew)
class UPickaxeIconSceneCaptureComponent : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bIsFullView;
    
    UPROPERTY(EditAnywhere)
    EPickaxePartLocation CameraKey;
    
    UPickaxeIconSceneCaptureComponent();
};

