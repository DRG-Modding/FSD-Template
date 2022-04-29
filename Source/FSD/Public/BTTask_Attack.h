#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_Attack.generated.h"

class UBehaviorTreeComponent;

UCLASS(Blueprintable)
class UBTTask_Attack : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackName;
    
public:
    UBTTask_Attack();
protected:
    UFUNCTION(BlueprintCallable)
    void OnAttackCompleted(UBehaviorTreeComponent* btComponent);
    
};

