#pragma once
#include "CoreMinimal.h"
#include "UnlockReward.h"
#include "UnlockPlanetZoneReward.generated.h"

class UPlanetZone;

UCLASS(BlueprintType, EditInlineNew)
class UUnlockPlanetZoneReward : public UUnlockReward {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPlanetZone* ZoneToUnlock;
    
public:
    UUnlockPlanetZoneReward();
};

