#pragma once
#include "CoreMinimal.h"
#include "CarriableItem.h"
#include "Gem.generated.h"

class UResourceData;
class UCarriableInstantUsable;

UCLASS(Abstract)
class AGem : public ACarriableItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCarriableInstantUsable* Usable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* ResourceType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ResourceAmount;
    
    UPROPERTY(Transient)
    bool hasBeenReleased;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetHasBeenReleased(bool NewHasBeenReleased);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasBeenReleased() const;
    
    AGem();
};

