#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EItemSkinCollectionType.h"
#include "ItemSkinSchematicCollection.generated.h"

class USchematic;
class USchematicPricingTier;
class UItemSkin;
class USchematicCategory;
class USchematicRarity;

UCLASS()
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
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EItemSkinCollectionType LastGeneratedCollectionType;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USchematic*> Schematics;
    
public:
    UItemSkinSchematicCollection();
};

