#pragma once
#include "CoreMinimal.h"
#include "DeepPathfinderCharacter.h"
#include "DroneCharacter.generated.h"

class UOutlineComponent;
class UHealthComponent;
class USimpleObjectInfoComponent;

UCLASS(Abstract)
class ADroneCharacter : public ADeepPathfinderCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USimpleObjectInfoComponent* ObjectInfo;
    
public:
    ADroneCharacter();
};

