#pragma once
#include "CoreMinimal.h"
#include "RessuplyPod.h"
#include "ResonanceScannerPod.generated.h"

UCLASS(Blueprintable)
class AResonanceScannerPod : public ARessuplyPod {
    GENERATED_BODY()
public:
    AResonanceScannerPod(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConnectedToTarget();
    
};

