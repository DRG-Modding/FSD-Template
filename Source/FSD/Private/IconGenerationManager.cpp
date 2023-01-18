#include "IconGenerationManager.h"

class UIconGenerationManager;
class UItemSkin;
class UPickaxePart;
class UPlayerCharacterID;
class UTextureRenderTarget2D;
class UVanityItem;

void UIconGenerationManager::GenerateWeaponIcon_Async(UIconGenerationManager* manager, UItemSkin* Item, bool inShowCloseUp, UPlayerCharacterID* Character, UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo) {
}

void UIconGenerationManager::GenerateVanityIcon_Async(UIconGenerationManager* manager, UVanityItem* Item, UPlayerCharacterID* Character, UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo) {
}

void UIconGenerationManager::GeneratePickaxeSetIcon_Async(UIconGenerationManager* manager, FPickaxeSet PickaxeSet, UPlayerCharacterID* Character, UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo) {
}

void UIconGenerationManager::GeneratePickaxePartIcon_Async(UIconGenerationManager* manager, UPickaxePart* part, EPickaxePartLocation PickaxePartLocation, UPlayerCharacterID* Character, UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo) {
}

UIconGenerationManager::UIconGenerationManager() {
    this->GeneratorInst = NULL;
    this->PickaxeGeneratorInst = NULL;
    this->WeaponGeneratorInst = NULL;
    this->LatestGeneratedTexture = NULL;
    this->ActiveIconGenerator = NULL;
}

