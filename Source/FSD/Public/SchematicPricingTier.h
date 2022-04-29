#pragma once
#include "CoreMinimal.h"
#include "PricingTier.h"
#include "SchematicPricingTier.generated.h"

UCLASS(Blueprintable)
class FSD_API USchematicPricingTier : public UPricingTier {
    GENERATED_BODY()
public:
    USchematicPricingTier();
};

