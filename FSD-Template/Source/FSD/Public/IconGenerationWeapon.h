#pragma once
#include "CoreMinimal.h"
#include "IconGenerationBase.h"
#include "IconGenerationWeapon.generated.h"

class UWeaponIconSceneCaptureComponent;

UCLASS()
class AIconGenerationWeapon : public AIconGenerationBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    TArray<UWeaponIconSceneCaptureComponent*> CaptureComponents;
    
public:
    AIconGenerationWeapon();
};

