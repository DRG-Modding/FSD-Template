#pragma once
#include "CoreMinimal.h"
#include "DeepPathfinderCharacter.h"
#include "EDroneState.h"
#include "DroneBase.generated.h"

class UDroneStateComponentBase;

UCLASS(Blueprintable)
class ADroneBase : public ADeepPathfinderCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDroneState DefaultState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDroneStateComponentBase*> DroneStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    EDroneState CurrentState;
    
public:
    ADroneBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState(EDroneState Previous);
    
};

