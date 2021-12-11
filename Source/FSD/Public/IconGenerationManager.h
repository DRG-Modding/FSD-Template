#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GenerateIconInfo.h"
#include "EVanitySlot.h"
#include "Engine/LatentActionManager.h"
#include "PickaxeSet.h"
#include "EPickaxePartLocation.h"
#include "IconGenerationManager.generated.h"

class AIconGenerationPickaxe;
class AIconGenerationCharacter;
class UTextureRenderTarget2D;
class AIconGenerationWeapon;
class UVanityItem;
class AIconGenerationBase;
class UIconGenerationManager;
class UItemSkin;
class UPlayerCharacterID;
class UPickaxePart;

UCLASS(BlueprintType)
class UIconGenerationManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    AIconGenerationCharacter* GeneratorInst;
    
    UPROPERTY(Transient)
    AIconGenerationPickaxe* PickaxeGeneratorInst;
    
    UPROPERTY(Transient)
    AIconGenerationWeapon* WeaponGeneratorInst;
    
    UPROPERTY(Transient)
    TArray<FGenerateIconInfo> ItemGenerationQueue;
    
    UPROPERTY(EditAnywhere)
    TArray<EVanitySlot> VanitySlots;
    
    UPROPERTY(EditAnywhere)
    TArray<UVanityItem*> HairColorHairItems;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AIconGenerationCharacter> IconCharacter;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AIconGenerationPickaxe> IconPickaxe;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AIconGenerationWeapon> IconWeapon;
    
    UPROPERTY(Transient)
    UTextureRenderTarget2D* LatestGeneratedTexture;
    
    UPROPERTY(Transient)
    AIconGenerationBase* ActiveIconGenerator;
    
public:
    UFUNCTION(BlueprintCallable)
    static void GenerateWeaponIcon_Async(UIconGenerationManager* Manager, UItemSkin* Item, bool inShowCloseUp, UPlayerCharacterID* Character, UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void GenerateVanityIcon_Async(UIconGenerationManager* Manager, UVanityItem* Item, UPlayerCharacterID* Character, UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void GeneratePickaxeSetIcon_Async(UIconGenerationManager* Manager, FPickaxeSet PickaxeSet, UPlayerCharacterID* Character, UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void GeneratePickaxePartIcon_Async(UIconGenerationManager* Manager, UPickaxePart* part, EPickaxePartLocation PickaxePartLocation, UPlayerCharacterID* Character, UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo);
    
    UIconGenerationManager();
};

