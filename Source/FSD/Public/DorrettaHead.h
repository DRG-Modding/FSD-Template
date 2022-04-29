#pragma once
#include "CoreMinimal.h"
#include "CarriableItem.h"
#include "DorrettaHead.generated.h"

class UCarriableInstantUsable;
class UCarriableComponent;

UCLASS(Blueprintable)
class ADorrettaHead : public ACarriableItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCarriableInstantUsable* Usable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCarriableComponent* CarriableComponent;
    
public:
    ADorrettaHead();
};

