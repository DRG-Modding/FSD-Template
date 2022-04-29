#pragma once
#include "CoreMinimal.h"
#include "IconGenerationBase.h"
#include "IconGenerationWeapon.generated.h"

class UWeaponIconSceneCaptureComponent;

UCLASS(Blueprintable)
class AIconGenerationWeapon : public AIconGenerationBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWeaponIconSceneCaptureComponent*> CaptureComponents;
    
public:
    AIconGenerationWeapon();
};

