#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimatedItem.h"
#include "Upgradable.h"
#include "PlaceableInterface.h"
#include "UObject/NoExportTypes.h"
#include "PlaceableItem.generated.h"

class AActor;
class UCapacityHoldingItemAggregator;
class UItemPlacerAggregator;

UCLASS()
class APlaceableItem : public AAnimatedItem, public IUpgradable, public IPlaceableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCapacityHoldingItemAggregator* Capacity;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UItemPlacerAggregator* ItemPlacer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> PlacableClass;
    
public:
    APlaceableItem();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SpawnItem(FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveItemSpawned(AActor* SpawnedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnCarriedAmountChanged(int32 newAmount);
    
    
    // Fix for true pure virtual functions not being implemented
};

