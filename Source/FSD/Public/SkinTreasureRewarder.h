#pragma once
#include "CoreMinimal.h"
#include "TreasureRewarder.h"
#include "SkinTreasureRewarder.generated.h"

class UItemID;
class UItemSkin;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USkinTreasureRewarder : public UTreasureRewarder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemSkin* GivenSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemID* GivenSkinID;
    
    USkinTreasureRewarder();
};

