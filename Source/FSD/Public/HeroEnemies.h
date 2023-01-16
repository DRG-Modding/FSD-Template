#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EliteEnemyEntry.h"
#include "RunningMissionBP.h"
#include "HeroEnemies.generated.h"

class APawn;
class UEnemyDescriptor;

UCLASS(Abstract, Blueprintable)
class UHeroEnemies : public URunningMissionBP {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery AllowedQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UEnemyDescriptor*, FEliteEnemyEntry> Entries;
    
public:
    UHeroEnemies();
protected:
    UFUNCTION(BlueprintCallable)
    void OnEnemySpawned(APawn* enemy, UEnemyDescriptor* descriptor);
    
};

