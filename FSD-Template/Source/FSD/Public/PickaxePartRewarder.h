#pragma once
#include "CoreMinimal.h"
#include "TreasureRewarder.h"
#include "PickaxePartRewarder.generated.h"

class UPickaxePart;

UCLASS()
class UPickaxePartRewarder : public UTreasureRewarder {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UPickaxePart* PickaxePart;
    
    UPickaxePartRewarder();
};

