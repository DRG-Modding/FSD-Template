#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "RunningMissionBP.h"
#include "Templates/SubclassOf.h"
#include "StatusEffectEnemies.generated.h"

class APawn;
class UEnemyDescriptor;
class UStatusEffect;

UCLASS(Abstract, Blueprintable)
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

