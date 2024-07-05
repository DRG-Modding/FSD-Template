#pragma once
#include "CoreMinimal.h"
#include "RecalculatedElectroBeam.h"
#include "CrossbowElectroBeam.generated.h"

UCLASS(Blueprintable)
class ACrossbowElectroBeam : public ARecalculatedElectroBeam {
    GENERATED_BODY()
public:
    ACrossbowElectroBeam(const FObjectInitializer& ObjectInitializer);

};

