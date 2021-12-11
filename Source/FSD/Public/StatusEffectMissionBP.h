#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RunningMissionBP.h"
#include "GameplayTagContainer.h"
#include "StatusEffectMissionBP.generated.h"

class UStatusEffect;
class APawn;
class UEnemyDescriptor;

UCLASS()
class UStatusEffectMissionBP : public URunningMissionBP {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery EnemyQuery;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> StatusEffect;
    
    UFUNCTION(BlueprintCallable)
    void OnEnemySpawned(APawn* Pawn, UEnemyDescriptor* descriptor);
    
public:
    UStatusEffectMissionBP();
};

