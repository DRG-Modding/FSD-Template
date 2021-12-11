#pragma once
#include "CoreMinimal.h"
#include "RessuplyPod.h"
#include "SalvageFuelPod.generated.h"

class AFuelLineEndPoint;
class AFuelLineSegment;

UCLASS(Abstract)
class ASalvageFuelPod : public ARessuplyPod {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveFuelLineStarted(bool InFuelLineStarted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveFuelLineConnected(AFuelLineEndPoint* InFuelLine);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveFirstFuelLineSegment(AFuelLineSegment* InFirstSegment);
    
    ASalvageFuelPod();
};

