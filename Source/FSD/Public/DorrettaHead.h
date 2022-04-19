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
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCarriableInstantUsable* Usable;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCarriableComponent* CarriableComponent;
    
public:
    ADorrettaHead();
};

