#pragma once
#include "CoreMinimal.h"
#include "FloatPerkActivation.h"
#include "SetMaxUsesPerkActivation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USetMaxUsesPerkActivation : public UFloatPerkActivation {
    GENERATED_BODY()
public:
    USetMaxUsesPerkActivation();
};

