#pragma once
#include "CoreMinimal.h"
#include "TreasureRewarder.h"
#include "VanityItemRewarder.generated.h"

class UVanityItem;
class UPlayerCharacterID;

UCLASS()
class UVanityItemRewarder : public UTreasureRewarder {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UVanityItem* GivenVanityItem;
    
    UPROPERTY(Transient)
    UPlayerCharacterID* GivenCharacterID;
    
    UVanityItemRewarder();
};

