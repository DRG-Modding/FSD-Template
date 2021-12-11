#pragma once
#include "CoreMinimal.h"
#include "TreasureRewarder.h"
#include "DrinkTreasureRewarder.generated.h"

class UDrinkableDataAsset;

UCLASS()
class UDrinkTreasureRewarder : public UTreasureRewarder {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UDrinkableDataAsset* GivenDrink;
    
    UDrinkTreasureRewarder();
};

