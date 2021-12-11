#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTService.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BTServer_ChaseTarget.generated.h"

UCLASS()
class UBTServer_ChaseTarget : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetKey;
    
    UPROPERTY(EditAnywhere)
    bool MustBeAlive;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag SwitchTargetCooldownTag;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery TargetingQuery;
    
    UPROPERTY(EditAnywhere)
    bool IsFlying;
    
    UPROPERTY(EditAnywhere)
    bool CanShoot;
    
    UPROPERTY(EditAnywhere)
    float TargetingRange;
    
    UPROPERTY(EditAnywhere)
    float SwitchTargetTime;
    
    UPROPERTY(EditAnywhere)
    float SwitchTargetDeviation;
    
public:
    UBTServer_ChaseTarget();
};

