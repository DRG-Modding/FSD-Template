#pragma once
#include "CoreMinimal.h"
#include "CarriableItem.h"
#include "DorrettaHead.generated.h"

class UCarriableInstantUsable;
class UCarriableComponent;

UCLASS()
class ADorrettaHead : public ACarriableItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCarriableInstantUsable* Usable;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCarriableComponent* CarriableComponent;
    
public:
    ADorrettaHead();
};

