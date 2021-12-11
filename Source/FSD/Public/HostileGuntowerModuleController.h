#pragma once
#include "CoreMinimal.h"
#include "FSDAIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "HostileGuntowerModuleController.generated.h"

class UAIPerceptionComponent;
class AActor;

UCLASS()
class AHostileGuntowerModuleController : public AFSDAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAIPerceptionComponent* Perception;
    
    UFUNCTION(BlueprintCallable)
    void OnPerceptionUpdated(AActor* sensedActor, FAIStimulus Stimulus);
    
    AHostileGuntowerModuleController();
};

