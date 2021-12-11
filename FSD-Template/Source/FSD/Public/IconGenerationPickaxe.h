#pragma once
#include "CoreMinimal.h"
#include "IconGenerationBase.h"
#include "IconGenerationPickaxe.generated.h"

class UPickaxeIconSceneCaptureComponent;

UCLASS()
class AIconGenerationPickaxe : public AIconGenerationBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    TArray<UPickaxeIconSceneCaptureComponent*> CaptureComponents;
    
public:
    AIconGenerationPickaxe();
};

