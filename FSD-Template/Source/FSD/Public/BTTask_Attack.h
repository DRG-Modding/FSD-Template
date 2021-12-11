#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_Attack.generated.h"

class UBehaviorTreeComponent;

UCLASS()
class UBTTask_Attack : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetKey;
    
    UPROPERTY(EditAnywhere)
    FName AttackName;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAttackCompleted(UBehaviorTreeComponent* btComponent);
    
public:
    UBTTask_Attack();
};

