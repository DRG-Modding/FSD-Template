#pragma once
#include "CoreMinimal.h"
#include "SDFBase.h"
#include "SDFBaseWithTransform.generated.h"

UCLASS(Abstract, Blueprintable)
class USDFBaseWithTransform : public USDFBase {
    GENERATED_BODY()
public:
    USDFBaseWithTransform();
};

