#pragma once
#include "CoreMinimal.h"
#include "EnemyAIController.h"
#include "GameplayTagContainer.h"
#include "ConvertedRobotController.generated.h"

class UBehaviorTree;

UCLASS()
class AConvertedRobotController : public AEnemyAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CheckRangeInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxTimeInRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PersonalSpaceRange;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery FriendlyTargetingQuery;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SpecialAttackRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SpecialAttackFireRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WaitBeforeSpecial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WaitAfterSpecial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinSpecialAttackCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxSpecialAttackCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UBehaviorTree* BehaviourTree;
    
private:
    UPROPERTY(EditDefaultsOnly)
    float UpdateTargetInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float PowerDownAfterSeconds;
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetCloseTimer();
    
    AConvertedRobotController();
};

