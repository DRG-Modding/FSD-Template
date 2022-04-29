#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IconGenerationBase.generated.h"

class USceneCaptureComponent2D;
class UMaterialInterface;

UCLASS(Blueprintable)
class AIconGenerationBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* ActiveCaptureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DownScaleMaterial;
    
public:
    AIconGenerationBase();
};

