#pragma once
#include "CoreMinimal.h"
#include "TreasureRewarder.h"
#include "SkinTreasureRewarder.generated.h"

class UItemSkin;
class UItemID;

UCLASS()
class USkinTreasureRewarder : public UTreasureRewarder {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UItemSkin* GivenSkin;
    
    UPROPERTY(Transient)
    UItemID* GivenSkinID;
    
    USkinTreasureRewarder();
};

