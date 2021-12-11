#pragma once
#include "CoreMinimal.h"
#include "FSDAIController.h"
#include "FSDFlyingBugController.generated.h"

class UBehaviorTree;

UCLASS()
class AFSDFlyingBugController : public AFSDAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBehaviorTree* BehaviourTree;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UpdateLosInterval;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool SetTargetOnAlert;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool SyncTargetWithBB;
    
    UFUNCTION(BlueprintCallable)
    void OnFlyingBugAlerted();
    
public:
    AFSDFlyingBugController();
};

