#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GenerateIconInfo.h"
#include "EVanitySlot.h"
#include "Engine/LatentActionManager.h"
#include "PickaxeSet.h"
#include "EPickaxePartLocation.h"
#include "IconGenerationManager.generated.h"

class AIconGenerationCharacter;
class AIconGenerationPickaxe;
class UPickaxePart;
class AIconGenerationWeapon;
class UTextureRenderTarget2D;
class UVanityItem;
class AIconGenerationBase;
class UIconGenerationManager;
class UItemSkin;
class UPlayerCharacterID;

UCLASS(BlueprintType)
class UIconGenerationManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AIconGenerationCharacter* GeneratorInst;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AIconGenerationPickaxe* PickaxeGeneratorInst;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AIconGenerationWeapon* WeaponGeneratorInst;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
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
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* LatestGeneratedTexture;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AIconGenerationBase* ActiveIconGenerator;
    
public:
    UIconGenerationManager();
    UFUNCTION(BlueprintCallable)
    static void GenerateWeaponIcon_Async(UIconGenerationManager* Manager, UItemSkin* Item, bool inShowCloseUp, UPlayerCharacterID* Character, UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void GenerateVanityIcon_Async(UIconGenerationManager* Manager, UVanityItem* Item, UPlayerCharacterID* Character, UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void GeneratePickaxeSetIcon_Async(UIconGenerationManager* Manager, FPickaxeSet PickaxeSet, UPlayerCharacterID* Character, UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void GeneratePickaxePartIcon_Async(UIconGenerationManager* Manager, UPickaxePart* part, EPickaxePartLocation PickaxePartLocation, UPlayerCharacterID* Character, UTextureRenderTarget2D*& Icon, FLatentActionInfo LatentInfo);
    
};

