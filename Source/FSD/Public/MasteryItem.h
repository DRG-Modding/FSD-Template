#pragma once
#include "CoreMinimal.h"
#include "MasteryItem.generated.h"

class UUnlockReward;

USTRUCT(BlueprintType)
struct FMasteryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NeededMastery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UUnlockReward*> Unlocks;
    
    FSD_API FMasteryItem();
};

