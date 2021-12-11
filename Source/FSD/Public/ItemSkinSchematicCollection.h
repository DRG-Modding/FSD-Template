#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EItemSkinCollectionType.h"
#include "ItemSkinSchematicCollection.generated.h"

class UItemSkin;
class USchematicCategory;
class USchematicPricingTier;
class USchematicRarity;
class USchematic;

UCLASS()
class FSD_API UItemSkinSchematicCollection : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UItemSkin* Skin;
    
    UPROPERTY(EditAnywhere)
    USchematicCategory* Category;
    
    UPROPERTY(EditAnywhere)
    USchematicPricingTier* PricingTier;
    
    UPROPERTY(EditAnywhere)
    USchematicRarity* Rarity;
    
    UPROPERTY(EditAnywhere)
    EItemSkinCollectionType CollectionType;
    
    UPROPERTY()
    EItemSkinCollectionType LastGeneratedCollectionType;
    
    UPROPERTY(Export, VisibleAnywhere)
    TArray<USchematic*> Schematics;
    
public:
    UItemSkinSchematicCollection();
};

