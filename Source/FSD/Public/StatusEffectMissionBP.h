#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RunningMissionBP.h"
#include "Templates/SubclassOf.h"
#include "StatusEffectMissionBP.generated.h"

class APawn;
class UEnemyDescriptor;
class UStatusEffect;

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

