#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DamageBonusBase.h"
#include "SpawnOnImpactDamageBonus.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class USpawnOnImpactDamageBonus : public UDamageBonusBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorToSpawn;
    
public:
    USpawnOnImpactDamageBonus();
};

