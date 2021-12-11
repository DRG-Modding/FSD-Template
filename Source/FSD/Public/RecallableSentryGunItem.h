#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RecallableItem.h"
#include "RecallableSentryGunItem.generated.h"

class UItemPlacerAggregator;
class ARecallableSentryGunItem;
class ARecallableSentryGun;
class UCapacityHoldingItemAggregator;
class UItemUpgrade;
class AItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRecallableSentryGunItemOnActiveItemsChanged, ARecallableSentryGunItem*, Item);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRecallableSentryGunItemOnSelectedItemChanged, ARecallableSentryGun*, SentryGun);

UCLASS()
class ARecallableSentryGunItem : public ARecallableItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRecallableSentryGunItemOnActiveItemsChanged OnActiveItemsChanged;
    
    UPROPERTY(BlueprintAssignable)
    FRecallableSentryGunItemOnSelectedItemChanged OnSelectedItemChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxSentryCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinDistanceBetweenSentries;
    
    UPROPERTY(EditAnywhere)
    FText RecallHoldDescription;
    
    UPROPERTY(EditAnywhere)
    float RecallHoldDuration;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCapacityHoldingItemAggregator* AmmoCapacity;
    
    UPROPERTY(Export, VisibleAnywhere)
    UItemPlacerAggregator* ItemPlacer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<UItemUpgrade*> upgrades;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AItem> LoadoutClass;
    
    UPROPERTY(EditAnywhere)
    float SupplyStatusWeight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float SentryAngleRestriction;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsUpgraded;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveItemUpgraded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAmmoLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARecallableSentryGun* GetSelectedSentryGun();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ARecallableSentryGun*> GetActiveSentryGuns();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllSentriesPlaced() const;
    
    ARecallableSentryGunItem();
};

