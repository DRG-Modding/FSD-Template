#pragma once
#include "CoreMinimal.h"
#include "DroneBase.h"
#include "StateDrivenBosco.generated.h"

class UParticleSystemComponent;
class UAudioComponent;
class UPointLightComponent;
class UDroneFollowState;
class UDroneCombatState;
class UDroneMiningState;
class UDroneReviveState;

UCLASS(Blueprintable)
class AStateDrivenBosco : public ADroneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPointLightComponent* PointLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* ThrusterSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* L_ThrusterParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* R_ThrusterParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDroneFollowState* FollowState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDroneCombatState* CombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDroneMiningState* MiningState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDroneReviveState* ReviveState;
    
    AStateDrivenBosco();
};

