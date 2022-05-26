#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EDroneState.h"
#include "DroneStateComponentBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDroneStateComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDroneState SubsequentState;
    
public:
    UDroneStateComponentBase();
};

