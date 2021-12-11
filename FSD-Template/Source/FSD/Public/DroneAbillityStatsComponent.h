#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DroneAbillityStatsComponent.generated.h"

UCLASS()
class UDroneAbillityStatsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool UseOwnArmorDamageMultiplier;
    
public:
    UDroneAbillityStatsComponent();
};

