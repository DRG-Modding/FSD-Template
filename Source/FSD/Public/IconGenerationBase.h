#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IconGenerationBase.generated.h"

class UMaterialInterface;
class USceneCaptureComponent2D;

UCLASS()
class AIconGenerationBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    USceneCaptureComponent2D* ActiveCaptureComponent;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* DownScaleMaterial;
    
public:
    AIconGenerationBase();
};

