#pragma once
#include "CoreMinimal.h"
#include "LineSpikeTaskBase.h"
#include "AquireTargetTask.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class UAquireTargetTask : public ULineSpikeTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceNewTarget;
    
    UAquireTargetTask();
};

