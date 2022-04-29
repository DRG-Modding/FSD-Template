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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicPricingTier* PricingTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicRarity* Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USchematic*> Schematics;
    
    FSD_API FSchematicBankItem();
};

