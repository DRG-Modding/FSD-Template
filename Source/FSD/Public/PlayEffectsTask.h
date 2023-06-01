#pragma once
#include "CoreMinimal.h"
#include "LineSpikeTaskBase.h"
#include "PlayEffectsTask.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class UPlayEffectsTask : public ULineSpikeTaskBase {
    GENERATED_BODY()
public:
    UPlayEffectsTask();
};

