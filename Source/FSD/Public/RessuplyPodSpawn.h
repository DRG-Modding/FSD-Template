#pragma once
#include "CoreMinimal.h"
#include "RessuplyPod.h"
#include "RessuplyPodSpawn.generated.h"

class APlayerCharacter;
class AFSDPlayerController;

UCLASS(Blueprintable)
class ARessuplyPodSpawn : public ARessuplyPod {
    GENERATED_BODY()
public:
    ARessuplyPodSpawn();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetController(AFSDPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCharacter(APlayerCharacter* Character);
    
};

