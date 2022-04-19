#pragma once
#include "CoreMinimal.h"
#include "SchematicBankItem.generated.h"

class USchematic;
class USchematicPricingTier;
class USchematicRarity;

USTRUCT(BlueprintType)
struct FSchematicBankItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicPricingTier* PricingTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicRarity* Rarity;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USchematic*> Schematics;
    
    FSD_API FSchematicBankItem();
};

