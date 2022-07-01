#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemDelegateDelegate.h"
#include "InventoryBase.h"
#include "CarriableChangedDelegateDelegate.h"
#include "InventoryItemsLoadedDelegate.h"
#include "FlaresDelegateDelegate.h"
#include "GrenadesDelegateDelegate.h"
#include "FlareProductionDelegateDelegate.h"
#include "ResupplyDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EItemCategory.h"
#include "InventoryComponent.generated.h"

class AFlare;
class UInventoryList;
class APickaxeItem;
class AThrownGrenadeItem;
class AItem;
class USoundCue;
class UDialogDataAsset;
class UItemUpgrade;
class ALaserPointerItem;
class ATerrainScannerItem;
class ARessuplyPodItem;
class ARecallableSentryGunItem;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UInventoryComponent : public UInventoryBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryItemsLoaded OnItemsLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemDelegate OnItemClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemDelegate OnItemEquipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemDelegate OnItemUnequipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrenadesDelegate OnGrenadeCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlaresDelegate OnFlareCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlaresDelegate OnMaxFlareCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlareProductionDelegate OnFlareProduction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResupplyDelegate OnResuppliedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCarriableChangedDelegate OnCarriableChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInventoryList* InventoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AThrownGrenadeItem> ThrownGrenadeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_FlareClass, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFlare> flareClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FlareOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OutOfFlaresSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* OutOfFlaresShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlareAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlareCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FlareProductionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor FlareChromaColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FlareProductionTimeLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxFlares;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Flares;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FlareCooldownRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItemUpgrade*> FlareUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bItemsLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APickaxeItem* MiningItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AThrownGrenadeItem* GrenadeItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALaserPointerItem* LaserPointerItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATerrainScannerItem* TerrainScannerItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARessuplyPodItem* ResupplyItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARecallableSentryGunItem* RecallableSentryGunItem;
    
public:
    UInventoryComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UpdateFromSaveGameInSlot(EItemCategory Category);
    
    UFUNCTION(BlueprintCallable)
    void StartGrenadeThrow();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ThrowItem(AActor* Item, FVector force, bool PlayMontage);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ThrowFlare();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Resupply(float percentage);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PickupItemInstance(AItem* Item);
    
    UFUNCTION(BlueprintCallable)
    AItem* PickupItem(TSubclassOf<AItem> itemClass);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_FlareClass();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTerrainScannerEquipped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPickedUpItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDrink() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalAmmoLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARecallableSentryGunItem* GetRecallableSentryGunItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AItem* GetItem(EItemCategory Category) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AItem* GetEquippedItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCarriedItem() const;
    
    UFUNCTION(BlueprintCallable)
    bool EquipCategory(EItemCategory Category);
    
    UFUNCTION(BlueprintCallable)
    void Equip(AItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void EndGrenadeThrow();
    
    UFUNCTION(BlueprintCallable)
    void DropPickedupItem();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_Resupply(float percentage);
    
    UFUNCTION(BlueprintCallable)
    void AnimationNotify2();
    
    UFUNCTION(BlueprintCallable)
    void AnimationNotify1();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_PlayThrowMontage(AActor* Item);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddItemClass(TSubclassOf<AItem> itemClass);
    
};

