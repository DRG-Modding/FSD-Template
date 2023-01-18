#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EItemCategory.h"
#include "ItemFilterDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "InventoryList.generated.h"

class AActor;
class UItemID;
class UMaterialInterface;
class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class FSD_API UInventoryList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> IconWeaponSetOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> IconWeaponSetFill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> LaserpointerMarkerMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> LaserpointerBeamMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemID* LaserPointerItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemID* TerrainScannerItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemID* ResupplyItem;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItemID*> PrimaryWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItemID*> SecondaryWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItemID*> TraversalTools;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItemID*> ClassTools;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItemID*> Armors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItemID*> Flares;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItemID*> Grenades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItemID*> MiningTools;
    
public:
    UInventoryList();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    UItemID* GetPreviousUnlockedItem(UObject* WorldContextObject, EItemCategory Category, UItemID* currentItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemID* GetPreviousItem(EItemCategory Category, UItemID* currentItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfItems(EItemCategory Category) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    UItemID* GetNextUnlockedItem(UObject* WorldContextObject, EItemCategory Category, UItemID* currentItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemID* GetNextItem(EItemCategory Category, UItemID* currentItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<AActor>> GetLoadedItemListFiltered(EItemCategory Category, FItemFilterDelegate Filter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<AActor>> GetLoadedItemList(EItemCategory Category) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UItemID*> GetItemList(EItemCategory Category) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemIndex(EItemCategory Category, UItemID* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UItemID*> GetAllItemsList() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void CheckForInventoryAchievements(UObject* WorldContextObject);
    
};

