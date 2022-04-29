#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PricingTier.generated.h"

UCLASS(Abstract, Blueprintable)
class UPricingTier : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PriceKey;
    
    UPricingTier();
};

