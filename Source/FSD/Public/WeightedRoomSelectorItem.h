#pragma once
#include "CoreMinimal.h"
#include "WeightedRoomSelectorItem.generated.h"

class URoomGenerator;

USTRUCT(BlueprintType)
struct FWeightedRoomSelectorItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    URoomGenerator* Room;
    
    UPROPERTY(Transient)
    float Weight;
    
    FSD_API FWeightedRoomSelectorItem();
};

