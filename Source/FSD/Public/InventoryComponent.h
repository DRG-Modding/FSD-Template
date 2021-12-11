#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "CarriedItemState.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EItemCategory.h"
#include "ECharacterState.h"
#include "InventoryComponent.generated.h"

class APickaxeItem;
class AItem;
class UInventoryComponent;
class ARecallableSentryGunItem;
class ALaserPointerItem;
class UInventoryList;
class AActor;
class ARessuplyPodItem;
class AThrownGrenadeItem;
class ATerrainScannerItem;
class UItemUpgrade;
class USoundCue;
class UDialogDataAsset;
class AFlare;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInventoryComponentOnMaxFlareCountChanged, int32, CurrentCount, UInventoryComponent*, inventory);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInventoryComponentOnItemsLoaded);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryComponentOnItemClicked, AItem*, Item);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryComponentOnItemEquipped, AItem*, Item);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryComponentOnGrenadeCountChanged, int32, CurrentCount);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInventoryComponentOnFlareProduction, int32, NextIndex, float, Progress);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryComponentOnItemUnequipped, AItem*, Item);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInventoryComponentOnFlareCountChanged, int32, CurrentCount, UInventoryComponent*, inventory);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryComponentOnResuppliedEvent, float, percentage);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInventoryComponentOnCarriableChangedEvent, AActor*, carriedActor);

UCLASS(BlueprintType)
class UInventoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInventoryComponentOnItemsLoaded OnItemsLoaded;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryComponentOnItemClicked OnItemClicked;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryComponentOnItemEquipped OnItemEquipped;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryComponentOnItemUnequipped OnItemUnequipped;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryComponentOnGrenadeCountChanged OnGrenadeCountChanged;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryComponentOnFlareCountChanged OnFlareCountChanged;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryComponentOnMaxFlareCountChanged OnMaxFlareCountChanged;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryComponentOnFlareProduction OnFlareProduction;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryComponentOnResuppliedEvent OnResuppliedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FInventoryComponentOnCarriableChangedEvent OnCarriableChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bItemsLoaded;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UInventoryList* InventoryList;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AThrownGrenadeItem> ThrownGrenadeClass;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Items)
    TArray<AItem*> Items;
    
    UPROPERTY(Replicated, Transient)
    TArray<AItem*> UnlistedItems;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    APickaxeItem* MiningItem;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    AThrownGrenadeItem* GrenadeItem;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    ALaserPointerItem* LaserPointerItem;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    ATerrainScannerItem* TerrainScannerItem;
    
    UPROPERTY(Transient)
    ARecallableSentryGunItem* RecallableSentryGunItem;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PickedUpItem)
    AItem* PickedUpItem;
    
    UPROPERTY(Replicated, Transient)
    ARessuplyPodItem* ResupplyItem;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AItem* PreviousItem;
    
    UPROPERTY(Transient)
    TArray<AItem*> EquipHistory;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_CarriedItem)
    FCarriedItemState CarriedItem;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector FlareOffset;
    
    UPROPERTY(EditAnywhere)
    USoundCue* OutOfFlaresSound;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* OutOfFlaresShout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FlareAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FlareCooldown;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FlareProductionTime;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FLinearColor FlareChromaColor;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FlareProductionTimeLeft;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 MaxFlares;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 Flares;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FlareCooldownRemaining;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSubclassOf<AFlare> flareClass;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<UItemUpgrade*> FlareUpgrades;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_EquippedItem)
    AItem* EquippedItem;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UpdateFromSaveGameInSlot(EItemCategory Category);
    
    UFUNCTION(BlueprintCallable)
    void StartGrenadeThrow();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ThrowFlare();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Equip(AItem* Item);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DropCarriedItem();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Resupply(float percentage);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PickupItemInstance(AItem* Item);
    
    UFUNCTION(BlueprintCallable)
    AItem* PickupItem(TSubclassOf<AItem> itemClass);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PickedUpItem();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Items();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EquippedItem(AItem* oldItem);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CarriedItem(FCarriedItemState& LastCarriedItem);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterStateChanged(ECharacterState NewState);
    
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
    AActor* GetCarriedItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AItem*> GetAllItems() const;
    
    UFUNCTION(BlueprintCallable)
    void EquipLastItem(bool ignoreUsing);
    
    UFUNCTION(BlueprintCallable)
    bool EquipCategory(EItemCategory Category);
    
    UFUNCTION(BlueprintCallable)
    void EquipAtIndex(int32 Index, bool ignoreUsing);
    
    UFUNCTION(BlueprintCallable)
    void Equip(AItem* Item, bool ignoreIsUsing);
    
    UFUNCTION(BlueprintCallable)
    void EndGrenadeThrow();
    
    UFUNCTION(BlueprintCallable)
    void DropPickedupItem();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CreateStartingEquipmentWhenItemsLoaded();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_Resupply(float percentage);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_DropPickedUpItem();
    
    UFUNCTION(BlueprintCallable)
    void AnimationNotify2();
    
    UFUNCTION(BlueprintCallable)
    void AnimationNotify1();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UInventoryComponent();
};

