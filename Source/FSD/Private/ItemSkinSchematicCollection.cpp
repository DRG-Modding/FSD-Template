#include "ItemSkinSchematicCollection.h"

UItemSkinSchematicCollection::UItemSkinSchematicCollection() {
    this->Skin = NULL;
    this->Category = NULL;
    this->PricingTier = NULL;
    this->Rarity = NULL;
    this->CollectionType = EItemSkinCollectionType::PerCharacter;
    this->LastGeneratedCollectionType = EItemSkinCollectionType::PerCharacter;
}

