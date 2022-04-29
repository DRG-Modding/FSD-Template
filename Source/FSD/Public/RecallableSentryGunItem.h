#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RecallableItem.h"
#include "RecallableSentryGunItem.generated.h"

class ARecallableSentryGun;
class UItemPlacerAggregator;
class ARecallableSentryGunItem;
class UCapacityHoldingItemAggregator;
class UItemUpgrade;
class AItem;

UCLASS(Blueprintable)
class ARecallableSentryGunItem : public ARecallableItem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRecallableSentryGunSignature, ARecallableSentryGun*, SentryGun);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRecallableSentryGunItemSignature, ARecallableSentryGunItem*, Item);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecallableSentryGunItemSignature OnActiveItemsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecallableSentryGunSignature OnSelectedItemChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSentryCount;
    
    UPROPERTY(EditAnywhere)
    float MinDistanceBetweenSentries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RecallHoldDescription;
    
    UPROPERTY(EditAnywhere)
    float RecallHoldDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCapacityHoldingItemAggregator* AmmoCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UItemPlacerAggregator* ItemPlacer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItemUpgrade*> upgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItem> LoadoutClass;
    
    UPROPERTY(EditAnywhere)
    float SupplyStatusWeight;
    
    UPROPERTY(EditAnywhere, Transient)
    float SentryAngleRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

