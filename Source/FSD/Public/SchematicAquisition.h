#pragma once
#include "CoreMinimal.h"
#include "ItemAquisitionBase.h"
#include "SchematicAquisition.generated.h"

class USchematic;
class USchematicPricingTier;
class USchematicRarity;

UCLASS(BlueprintType, EditInlineNew)
class FSD_API USchematicAquisition : public UItemAquisitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicPricingTier* PricingTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicRarity* Rarity;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USchematic*> Schematics;
    
public:
    USchematicAquisition();
};

