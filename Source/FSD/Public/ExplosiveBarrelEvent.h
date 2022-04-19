#pragma once
#include "CoreMinimal.h"
#include "GameEvent.h"
#include "ExplosiveBarrelEvent.generated.h"

class UDamageComponent;

UCLASS()
class AExplosiveBarrelEvent : public AGameEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDamageComponent* EndDamage;
    
    AExplosiveBarrelEvent();
};

