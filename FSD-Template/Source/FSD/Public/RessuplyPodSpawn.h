#pragma once
#include "CoreMinimal.h"
#include "RessuplyPod.h"
#include "RessuplyPodSpawn.generated.h"

class AFSDPlayerController;
class APlayerCharacter;

UCLASS()
class ARessuplyPodSpawn : public ARessuplyPod {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetController(AFSDPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCharacter(APlayerCharacter* Character);
    
    ARessuplyPodSpawn();
};

