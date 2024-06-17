#pragma once
#include "CoreMinimal.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "CoreSpawnEnemyBase.generated.h"

class UDeathComponent;
class UEnemyComponent;
class UHitReactionComponent;
class UOutlineComponent;
class UPathfinderReactiveTerrainTrackerComponent;
class UPawnAlertComponent;
class UPawnSensingComponent;
class UPawnStatsComponent;

UCLASS(Blueprintable)
class ACoreSpawnEnemyBase : public AEnemyDeepPathfinderCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPawnStatsComponent* PawnStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitReactionComponent* HitReactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPawnSensingComponent* PawnSensing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnemyComponent* enemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOutlineComponent* outline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPathfinderReactiveTerrainTrackerComponent* PathfinderReactiveTerrainTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPawnAlertComponent* PawnAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDeathComponent* Death;
    
public:
    ACoreSpawnEnemyBase(const FObjectInitializer& ObjectInitializer);

};

