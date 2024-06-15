#include "IconGenerationManager.h"

UIconGenerationManager::UIconGenerationManager() {
    this->GeneratorInst = NULL;
    this->PickaxeGeneratorInst = NULL;
    this->WeaponGeneratorInst = NULL;
    this->LatestGeneratedTexture = NULL;
    this->ActiveIconGenerator = NULL;
}

UTextureRenderTarget2D* UIconGenerationManager::GenerateWeaponSkinIcon(UObject* WorldContextObject, UItemSkin* Item, bool inShowCloseUp, FTransform Offset, FVector2D Size) {
    return NULL;
}

void UIconGenerationManager::GenerateWeaponIcon_Async(UIconGenerationManager* Manager, UItemSkin* Item, bool inShowCloseUp, UPlayerCharacterID* Character, UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo) {
}

void UIconGenerationManager::GenerateVanityIcon_Async(UIconGenerationManager* Manager, UVanityItem* Item, UPlayerCharacterID* Character, FName CancelGroup, UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo) {
}

UTextureRenderTarget2D* UIconGenerationManager::GenerateVanityIcon(UObject* WorldContextObject, UVanityItem* Item, UPlayerCharacterID* Character, FTransform Offset, FVector2D Size, bool persistant) {
    return NULL;
}

void UIconGenerationManager::GeneratePickaxeSetIcon_Async(UIconGenerationManager* Manager, FPickaxeSet PickaxeSet, UPlayerCharacterID* Character, UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo) {
}

UTextureRenderTarget2D* UIconGenerationManager::GeneratePickaxeSetIcon(UObject* WorldContextObject, FPickaxeSet PickaxeSet, UPlayerCharacterID* Character, FTransform Offset, FVector2D Size) {
    return NULL;
}

void UIconGenerationManager::GeneratePickaxePartIcon_Async(UIconGenerationManager* Manager, UPickaxePart* part, EPickaxePartLocation PickaxePartLocation, UPlayerCharacterID* Character, UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo) {
}

UTextureRenderTarget2D* UIconGenerationManager::GeneratePickaxePartIcon(UObject* WorldContextObject, UPickaxePart* part, EPickaxePartLocation PickaxePartLocation, UPlayerCharacterID* Character, FTransform Offset, FVector2D Size) {
    return NULL;
}

void UIconGenerationManager::CancelIconGenerations(UIconGenerationManager* Manager, FName CancelGroup) {
}


