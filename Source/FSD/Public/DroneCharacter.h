#pragma once
#include "CoreMinimal.h"
#include "DeepPathfinderCharacter.h"
#include "DroneCharacter.generated.h"

class UHealthComponent;
class UOutlineComponent;
class USimpleObjectInfoComponent;

UCLASS(Abstract, Blueprintable)
class ADroneCharacter : public ADeepPathfinderCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USimpleObjectInfoComponent* ObjectInfo;
    
public:
    ADroneCharacter();
};

