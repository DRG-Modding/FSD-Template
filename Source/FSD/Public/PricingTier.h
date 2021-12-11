#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PricingTier.generated.h"

UCLASS(Abstract)
class UPricingTier : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString PriceKey;
    
    UPricingTier();
};

