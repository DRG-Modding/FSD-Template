#pragma once
#include "CoreMinimal.h"
#include "FloatPerkActivation.h"
#include "SetCooldownPerkActivation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USetCooldownPerkActivation : public UFloatPerkActivation {
    GENERATED_BODY()
public:
    USetCooldownPerkActivation();
};

