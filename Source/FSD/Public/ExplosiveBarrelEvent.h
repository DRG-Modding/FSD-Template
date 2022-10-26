#pragma once
#include "CoreMinimal.h"
#include "GameEvent.h"
#include "ExplosiveBarrelEvent.generated.h"

class UDamageComponent;

UCLASS(Blueprintable)
class AExplosiveBarrelEvent : public AGameEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageComponent* EndDamage;
    
    AExplosiveBarrelEvent();
};

