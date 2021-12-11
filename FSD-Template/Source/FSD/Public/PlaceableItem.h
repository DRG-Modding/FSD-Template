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
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCapacityHoldingItemAggregator* Capacity;
    
    UPROPERTY(Export, VisibleAnywhere)
    UItemPlacerAggregator* ItemPlacer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AActor> PlacableClass;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SpawnItem(FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveItemSpawned(AActor* SpawnedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnCarriedAmountChanged(int32 newAmount);
    
public:
    APlaceableItem();
    
    // Fix for true pure virtual functions not being implemented
};

