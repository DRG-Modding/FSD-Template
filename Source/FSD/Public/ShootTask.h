#pragma once
#include "CoreMinimal.h"
#include "LineSpikeTaskBase.h"
#include "ShootTask.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class UShootTask : public ULineSpikeTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasToFinish;
    
    UShootTask();
};

