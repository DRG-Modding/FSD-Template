#pragma once
#include "CoreMinimal.h"
#include "MasteryItem.generated.h"

class UUnlockReward;

USTRUCT(BlueprintType)
struct FMasteryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NeededMastery;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TArray<UUnlockReward*> Unlocks;
    
    FSD_API FMasteryItem();
};

