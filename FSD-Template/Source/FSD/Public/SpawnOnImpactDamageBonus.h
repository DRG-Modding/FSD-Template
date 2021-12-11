#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DamageBonusBase.h"
#include "SpawnOnImpactDamageBonus.generated.h"

class AActor;

UCLASS(EditInlineNew)
class USpawnOnImpactDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> ActorToSpawn;
    
public:
    USpawnOnImpactDamageBonus();
};

