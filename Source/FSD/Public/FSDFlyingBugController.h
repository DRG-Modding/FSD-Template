#pragma once
#include "CoreMinimal.h"
#include "FSDAIController.h"
#include "FSDFlyingBugController.generated.h"

class UBehaviorTree;

UCLASS(Blueprintable)
class AFSDFlyingBugController : public AFSDAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviourTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateLosInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SetTargetOnAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SyncTargetWithBB;
    
public:
    AFSDFlyingBugController();
protected:
    UFUNCTION(BlueprintCallable)
    void OnFlyingBugAlerted();
    
};

