#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "UpgradeTier.h"
#include "MasteryItem.h"
#include "GearStatEntry.h"
#include "EItemUpgradeStatus.h"
#include "CraftingCost.h"
#include "UpgradableGearComponent.generated.h"

class UItemData;
class UOverclockBank;
class UTexture2D;
class UItemUpgrade;
class AActor;
class UResourceData;
class UItemID;
class APlayerCharacter;
class AFSDPlayerController;
class UObject;
class AFSDPlayerState;
class UPlayerCharacterID;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UUpgradableGearComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemData* ItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUpgradeTier> UpgradeTiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOverclockBank* OverclockBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItemUpgrade*> AllOverclocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* IconLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* IconBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* IconDetailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> PreviewImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> PreviewActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CreditCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UResourceData*, float> ResourceCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredCharacterLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMasteryItem> masteryLevels;
    
public:
    UUpgradableGearComponent();
    UFUNCTION(BlueprintCallable)
    static void SetGearStatText(UPARAM(Ref) FGearStatEntry& Entry, FText Text);
    
    UFUNCTION(BlueprintCallable)
    bool PurchaseUpgrade(UItemID* ItemID, UItemUpgrade* Upgrade, AFSDPlayerController* PlayerController, TSubclassOf<APlayerCharacter> previewedCharacter);
    
    UFUNCTION(BlueprintCallable)
    static bool PurchaseItem(UObject* WorldContextObject, UItemID* ItemID);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayerOwnesUpgradeInAllTiers(TSubclassOf<AActor> itemClass, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void MirrorUpgradePreviewStatus(UPARAM(Ref) FGearStatEntry& From, UPARAM(Ref) FGearStatEntry& to);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUpgradeEquipped(TSubclassOf<AActor> itemClass, UItemUpgrade* Upgrade, AFSDPlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTierUnLocked(TSubclassOf<AActor> itemClass, int32 tierIndex, AFSDPlayerState* Player, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOverclockingEnabled(UObject* WorldContextObject, AFSDPlayerState* Player, UPlayerCharacterID* characterID, TSubclassOf<AActor> itemClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemUnlocked(UObject* WorldContextObject, UItemID* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemOwned(UObject* WorldContextObject, UItemID* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemEquipped(UObject* WorldContextObject, UItemID* ItemID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUpgradeTier(TSubclassOf<AActor> itemClass, UItemUpgrade* ItemUpgrade);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSourceGearName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<UResourceData*, float> GetResourceCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredCharacterLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetPreviewImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AActor> GetPreviewActorClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UItemUpgrade*> GetOverClocks() const;
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMasteryProgress(UObject* WorldContextObject, UItemID* ItemID, int32& maxMastery);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMasteryItem> GetMasteryLevels(UItemID* ItemID);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMasteryForLevel(const TArray<FMasteryItem>& NewMasteryLevels, int32 Level, FMasteryItem& outLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FUpgradeTier> GetItemUpgradeTiers(TSubclassOf<AActor> itemClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EItemUpgradeStatus GetItemUpgradeStatus(UObject* WorldContextObject, TSubclassOf<AActor> itemClass, UItemUpgrade* ItemUpgrade, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintPure)
    static TArray<UItemUpgrade*> GetItemUpgrades(TSubclassOf<AActor> itemClass, TSubclassOf<UItemUpgrade> upgradeClass, AFSDPlayerState* Player, uint8 upgradeIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<AActor> GetItemPreviewClassFromActor(TSubclassOf<AActor> Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<AActor> GetItemPreviewClass(UItemID* ItemID);
    
    UFUNCTION(BlueprintCallable)
    static bool GetItemMasteryForLevel(UItemID* ItemID, int32 Level, FMasteryItem& outLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetIconLine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetIconDetailed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetIconBG();
    
    UFUNCTION(BlueprintCallable)
    static FText GetGearStatValue(UPARAM(Ref) FGearStatEntry& Entry);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGearStatEntry> GetGearStats(AFSDPlayerState* PlayerState, TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGearSourceName(UItemID* ItemID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetGearName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetGearDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetGearCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UItemUpgrade*> GetEquippedUpgrades(TSubclassOf<AActor> itemClass, AFSDPlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UItemUpgrade* GetEquippedUpgradeAtTier(TSubclassOf<AActor> itemClass, int32 tierIndex, UPlayerCharacterID* characterID, AFSDPlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UItemUpgrade* GetEquippedOverclock(UObject* WorldContextObject, TSubclassOf<AActor> itemClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UItemUpgrade*> GetEquippableOverclocks(UObject* WorldContextObject, TSubclassOf<AActor> itemClass, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCreditCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCraftingCost> GetCraftingCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCharacterLevelRequiredForItem(UItemID* ItemID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UItemUpgrade*> GetAllUpgrades() const;
    
    UFUNCTION(BlueprintCallable)
    static void ClearEquippedUpgrade(TSubclassOf<AActor> itemClass, int32 tierIndex, AFSDPlayerState* Player);
    
    UFUNCTION(BlueprintCallable)
    static void CheckMasteryUnlocks(UItemID* ItemID, AFSDPlayerController* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanItemOverclock(UObject* WorldContextObject, TSubclassOf<AActor> itemClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanAffordUpgrade(UObject* WorldContextObject, UItemUpgrade* Upgrade);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanAffordItem(UObject* WorldContextObject, UItemID* ItemID);
    
};

