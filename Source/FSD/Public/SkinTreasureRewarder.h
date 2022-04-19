#pragma once
#include "CoreMinimal.h"
#include "TreasureRewarder.h"
#include "SkinTreasureRewarder.generated.h"

class UItemSkin;
class UItemID;

UCLASS(meta=(BlueprintSpawnableComponent))
class USkinTreasureRewarder : public UTreasureRewarder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UItemSkin* GivenSkin;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UItemID* GivenSkinID;
    
    USkinTreasureRewarder();
};

