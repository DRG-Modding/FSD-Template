#pragma once
#include "CoreMinimal.h"
#include "RessuplyPod.h"
#include "ERessuplyPodState.h"
#include "CleanupPod.generated.h"

class USphereComponent;
class UObjective;

UCLASS(Blueprintable)
class ACleanupPod : public ARessuplyPod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* RemovePlagueCollision;
    
    ACleanupPod();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectiveChanged(UObjective* Objective);
    
    UFUNCTION(BlueprintCallable)
    void ChangedState(ARessuplyPod* InPod, ERessuplyPodState InState);
    
};

