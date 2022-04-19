#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RunningMissionBP.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "StatusEffectEnemies.generated.h"

class UEnemyDescriptor;
class APawn;
class UStatusEffect;

UCLASS(Abstract)
class UStatusEffectEnemies : public URunningMissionBP {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UStatusEffect>> StatusEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AllowedFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery AllowedQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideReplacesDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UEnemyDescriptor*, TSubclassOf<UStatusEffect>> Overrides;
    
public:
    UStatusEffectEnemies();
protected:
    UFUNCTION(BlueprintCallable)
    void OnEnemySpawned(APawn* enemy, UEnemyDescriptor* descriptor);
    
};

