#pragma once
#include "CoreMinimal.h"
#include "RunningMissionBP.h"
#include "GameplayTagContainer.h"
#include "ExterminationReward.generated.h"

class UResourceData;
class AActor;

UCLASS(Abstract)
class UExterminationReward : public URunningMissionBP {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UResourceData* Resource;
    
    UPROPERTY(EditAnywhere)
    float AwardSize;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer AllowedFilter;
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyKilled(const FGameplayTagContainer& GameplayTags, AActor* killedEnemy);
    
public:
    UExterminationReward();
};

