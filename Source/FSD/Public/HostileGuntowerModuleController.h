#pragma once
#include "CoreMinimal.h"
#include "FSDAIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "HostileGuntowerModuleController.generated.h"

class UAIPerceptionComponent;
class AActor;

UCLASS(Blueprintable)
class AHostileGuntowerModuleController : public AFSDAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionComponent* Perception;
    
    AHostileGuntowerModuleController();
    UFUNCTION(BlueprintCallable)
    void OnPerceptionUpdated(AActor* sensedActor, FAIStimulus Stimulus);
    
};

