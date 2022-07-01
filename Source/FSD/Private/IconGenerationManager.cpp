#include "IconGenerationManager.h"

class UIconGenerationManager;
class UPlayerCharacterID;
class UItemSkin;
class UTextureRenderTarget2D;
class UPickaxePart;
class UVanityItem;

void UIconGenerationManager::GenerateWeaponIcon_Async(UIconGenerationManager* Manager, UItemSkin* Item, bool inShowCloseUp, UPlayerCharacterID* Character, UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo) {
}

void UIconGenerationManager::GenerateVanityIcon_Async(UIconGenerationManager* Manager, UVanityItem* Item, UPlayerCharacterID* Character, UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo) {
}

void UIconGenerationManager::GeneratePickaxeSetIcon_Async(UIconGenerationManager* Manager, FPickaxeSet PickaxeSet, UPlayerCharacterID* Character, UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo) {
}

void UIconGenerationManager::GeneratePickaxePartIcon_Async(UIconGenerationManager* Manager, UPickaxePart* part, EPickaxePartLocation PickaxePartLocation, UPlayerCharacterID* Character, UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo) {
}

UIconGenerationManager::UIconGenerationManager() {
    this->GeneratorInst = NULL;
    this->PickaxeGeneratorInst = NULL;
    this->WeaponGeneratorInst = NULL;
    this->LatestGeneratedTexture = NULL;
    this->ActiveIconGenerator = NULL;
}

