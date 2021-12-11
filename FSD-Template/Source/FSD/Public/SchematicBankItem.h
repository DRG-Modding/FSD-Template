#pragma once
#include "CoreMinimal.h"
#include "SchematicBankItem.generated.h"

class USchematicPricingTier;
class USchematicRarity;
class USchematic;

USTRUCT(BlueprintType)
struct FSchematicBankItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USchematicPricingTier* PricingTier;
    
    UPROPERTY(EditAnywhere)
    USchematicRarity* Rarity;
    
    UPROPERTY(VisibleAnywhere)
    TArray<USchematic*> Schematics;
    
    FSD_API FSchematicBankItem();
};

