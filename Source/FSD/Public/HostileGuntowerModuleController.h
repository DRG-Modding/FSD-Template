#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "FSDAIController.h"
#include "HostileGuntowerModuleController.generated.h"

class UAIPerceptionComponent;
class AActor;

UCLASS()
class AHostileGuntowerModuleController : public AFSDAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UAIPerceptionComponent* Perception;
    
    AHostileGuntowerModuleController();
    UFUNCTION(BlueprintCallable)
    void OnPerceptionUpdated(AActor* sensedActor, FAIStimulus Stimulus);
    
};

