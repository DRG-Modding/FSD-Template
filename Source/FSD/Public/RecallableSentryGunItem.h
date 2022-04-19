#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RecallableItem.h"
#include "RecallableSentryGunItem.generated.h"

class UCapacityHoldingItemAggregator;
class ARecallableSentryGun;
class UItemPlacerAggregator;
class ARecallableSentryGunItem;
class UItemUpgrade;
class AItem;

UCLASS()
class ARecallableSentryGunItem : public ARecallableItem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRecallableSentryGunSignature, ARecallableSentryGun*, SentryGun);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRecallableSentryGunItemSignature, ARecallableSentryGunItem*, Item);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRecallableSentryGunItemSignature OnActiveItemsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRecallableSentryGunSignature OnSelectedItemChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSentryCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceBetweenSentries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RecallHoldDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecallHoldDuration;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCapacityHoldingItemAggregator* AmmoCapacity;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UItemPlacerAggregator* ItemPlacer;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItemUpgrade*> upgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItem> LoadoutClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SupplyStatusWeight;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float SentryAngleRestriction;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bIsUpgraded;
    
public:
    ARecallableSentryGunItem();
protected:
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
    
};

