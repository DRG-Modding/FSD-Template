#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TreasureWeight.generated.h"

class UTreasureRewarder;

USTRUCT(BlueprintType)
struct FTreasureWeight {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Weight;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UTreasureRewarder> RewarderClass;
    
    FSD_API FTreasureWeight();
};

