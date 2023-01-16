#pragma once
#include "CoreMinimal.h"
#include "EItemSkinCollectionType.h"
#include "Engine/DataAsset.h"
#include "ItemSkinSchematicCollection.generated.h"

class USchematicPricingTier;
class UItemSkin;
class USchematicCategory;
class USchematic;
class USchematicRarity;

UCLASS(Blueprintable)
class FSD_API UItemSkinSchematicCollection : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemSkin* Skin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicCategory* Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicPricingTier* PricingTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicRarity* Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemSkinCollectionType CollectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemSkinCollectionType LastGeneratedCollectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USchematic*> Schematics;
    
public:
    UItemSkinSchematicCollection();
};

