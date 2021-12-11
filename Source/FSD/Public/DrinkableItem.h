#pragma once
#include "CoreMinimal.h"
#include "AnimatedItem.h"
#include "DrinkableItem.generated.h"

class UDrinkableDataAsset;

UCLASS(Abstract)
class ADrinkableItem : public AAnimatedItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_DrinkableData)
    UDrinkableDataAsset* DrinkableData;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DrinkableData();
    
    UFUNCTION(BlueprintCallable)
    void Consume();
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientConsumed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CheckCanSalute() const;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ADrinkableItem();
};

