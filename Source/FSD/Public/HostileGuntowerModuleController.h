#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "FSDAIController.h"
#include "HostileGuntowerModuleController.generated.h"

class AActor;
class UAIPerceptionComponent;

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

