#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RunningMissionBP.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "StatusEffectEnemies.generated.h"

class UStatusEffect;
class UEnemyDescriptor;
class APawn;

UCLASS(Abstract)
class UStatusEffectEnemies : public URunningMissionBP {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UStatusEffect>> StatusEffects;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer AllowedFilter;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery AllowedQuery;
    
    UPROPERTY(EditAnywhere)
    float ChanceToApply;
    
    UPROPERTY(EditAnywhere)
    bool OverrideReplacesDefault;
    
    UPROPERTY(EditAnywhere)
    TMap<UEnemyDescriptor*, TSubclassOf<UStatusEffect>> Overrides;
    
    UFUNCTION(BlueprintCallable)
    void OnEnemySpawned(APawn* enemy, UEnemyDescriptor* descriptor);
    
public:
    UStatusEffectEnemies();
};

