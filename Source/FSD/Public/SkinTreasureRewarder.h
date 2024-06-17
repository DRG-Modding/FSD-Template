#pragma once
#include "CoreMinimal.h"
#include "TreasureRewarder.h"
#include "SkinTreasureRewarder.generated.h"

class UItemAquisitionSource;
class UItemID;
class UItemSkin;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USkinTreasureRewarder : public UTreasureRewarder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemAquisitionSource* AquisitionSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemSkin* GivenSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemID* GivenSkinID;
    
    USkinTreasureRewarder(const FObjectInitializer& ObjectInitializer);

};

