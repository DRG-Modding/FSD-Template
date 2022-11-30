#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RunningMissionBP.h"
#include "GameplayTagContainer.h"
#include "StatusEffectMissionBP.generated.h"

class UStatusEffect;
class APawn;
class UEnemyDescriptor;

UCLASS(Blueprintable)
class UStatusEffectMissionBP : public URunningMissionBP {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery EnemyQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> StatusEffect;
    
public:
    UStatusEffectMissionBP();
protected:
    UFUNCTION(BlueprintCallable)
    void OnEnemySpawned(APawn* Pawn, UEnemyDescriptor* descriptor);
    
};

