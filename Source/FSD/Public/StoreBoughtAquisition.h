#pragma once
#include "CoreMinimal.h"
#include "ItemAquisitionBase.h"
#include "StoreBoughtAquisition.generated.h"

class UResourceData;

UCLASS(Blueprintable, EditInlineNew)
class FSD_API UStoreBoughtAquisition : public UItemAquisitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CreditsCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UResourceData*, float> ResourceCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredPlayerRank;
    
public:
    UStoreBoughtAquisition();
};

