#pragma once
#include "CoreMinimal.h"
#include "DeepPathfinderCharacter.h"
#include "Maggot.generated.h"

class USimpleHealthComponent;

UCLASS()
class AMaggot : public ADeepPathfinderCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USimpleHealthComponent* HealthComponent;
    
public:
    AMaggot();
};

