#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "EPickaxePartLocation.h"
#include "EVanitySlot.h"
#include "GenerateIconInfo.h"
#include "PickaxeSet.h"
#include "IconGenerationManager.generated.h"

class AIconGenerationBase;
class AIconGenerationCharacter;
class AIconGenerationPickaxe;
class AIconGenerationWeapon;
class UIconGenerationManager;
class UItemSkin;
class UPickaxePart;
class UPlayerCharacterID;
class UTextureRenderTarget2D;
class UVanityItem;

UCLASS(Blueprintable)
class UIconGenerationManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIconGenerationCharacter* GeneratorInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIconGenerationPickaxe* PickaxeGeneratorInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIconGenerationWeapon* WeaponGeneratorInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGenerateIconInfo> ItemGenerationQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVanitySlot> VanitySlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVanityItem*> HairColorHairItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AIconGenerationCharacter> IconCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AIconGenerationPickaxe> IconPickaxe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AIconGenerationWeapon> IconWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* LatestGeneratedTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIconGenerationBase* ActiveIconGenerator;
    
public:
    UIconGenerationManager();
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void GenerateWeaponIcon_Async(UIconGenerationManager* manager, UItemSkin* Item, bool inShowCloseUp, UPlayerCharacterID* Character, UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void GenerateVanityIcon_Async(UIconGenerationManager* manager, UVanityItem* Item, UPlayerCharacterID* Character, UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void GeneratePickaxeSetIcon_Async(UIconGenerationManager* manager, FPickaxeSet PickaxeSet, UPlayerCharacterID* Character, UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void GeneratePickaxePartIcon_Async(UIconGenerationManager* manager, UPickaxePart* part, EPickaxePartLocation PickaxePartLocation, UPlayerCharacterID* Character, UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo);
    
};

