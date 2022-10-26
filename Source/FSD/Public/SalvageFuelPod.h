#pragma once
#include "CoreMinimal.h"
#include "RessuplyPod.h"
#include "SalvageFuelPod.generated.h"

UCLASS(Abstract, Blueprintable)
class ASalvageFuelPod : public ARessuplyPod {
    GENERATED_BODY()
public:
    ASalvageFuelPod();
};

