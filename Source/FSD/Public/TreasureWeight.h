#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TreasureWeight.generated.h"

class UTreasureRewarder;

USTRUCT(BlueprintType)
struct FTreasureWeight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTreasureRewarder> RewarderClass;
    
    FSD_API FTreasureWeight();
};

