#pragma once
#include "CoreMinimal.h"
#include "IconGenerationBase.h"
#include "IconGenerationPickaxe.generated.h"

class UPickaxeIconSceneCaptureComponent;

UCLASS(Blueprintable)
class AIconGenerationPickaxe : public AIconGenerationBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPickaxeIconSceneCaptureComponent*> CaptureComponents;
    
public:
    AIconGenerationPickaxe();
};

