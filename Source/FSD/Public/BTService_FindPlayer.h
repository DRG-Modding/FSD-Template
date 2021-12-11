#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTService.h"
#include "BTService_FindPlayer.generated.h"

UCLASS()
class UBTService_FindPlayer : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetKey;
    
    UPROPERTY(EditAnywhere)
    bool MustBeAlive;
    
    UPROPERTY(EditAnywhere)
    bool SwithToBetterTargets;
    
    UPROPERTY(EditAnywhere)
    bool RegisterForPositioning;
    
    UPROPERTY(EditAnywhere)
    bool IsFlying;
    
    UPROPERTY(EditAnywhere)
    bool CanShoot;
    
    UPROPERTY(EditAnywhere)
    float TargetingRange;
    
public:
    UBTService_FindPlayer();
};

