#pragma once
#include "CoreMinimal.h"
#include "DeepPathfinderCharacter.h"
#include "DroneCharacter.generated.h"

class USimpleObjectInfoComponent;
class UOutlineComponent;
class UHealthComponent;

UCLASS(Abstract)
class ADroneCharacter : public ADeepPathfinderCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USimpleObjectInfoComponent* ObjectInfo;
    
public:
    ADroneCharacter();
};

