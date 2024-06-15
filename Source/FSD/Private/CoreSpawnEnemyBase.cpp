#include "CoreSpawnEnemyBase.h"
#include "Perception/PawnSensingComponent.h"
#include "DeathComponent.h"
#include "EnemyComponent.h"
#include "HitReactionComponent.h"
#include "OutlineComponent.h"
#include "PathfinderReactiveTerrainTrackerComponent.h"
#include "PawnAlertComponent.h"
#include "PawnStatsComponent.h"

ACoreSpawnEnemyBase::ACoreSpawnEnemyBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PawnStats = CreateDefaultSubobject<UPawnStatsComponent>(TEXT("PawnStats"));
    this->HitReactions = CreateDefaultSubobject<UHitReactionComponent>(TEXT("HitReactions"));
    this->PawnSensing = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensing"));
    this->enemy = CreateDefaultSubobject<UEnemyComponent>(TEXT("enemy"));
    this->outline = CreateDefaultSubobject<UOutlineComponent>(TEXT("outline"));
    this->PathfinderReactiveTerrainTracker = CreateDefaultSubobject<UPathfinderReactiveTerrainTrackerComponent>(TEXT("PathfinderReactiveTerrainTracker"));
    this->PawnAlert = CreateDefaultSubobject<UPawnAlertComponent>(TEXT("PawnAlert"));
    this->Death = CreateDefaultSubobject<UDeathComponent>(TEXT("Death"));
}


