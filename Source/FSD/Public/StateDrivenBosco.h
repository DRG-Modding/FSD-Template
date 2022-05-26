#pragma once
#include "CoreMinimal.h"
#include "DroneBase.h"
#include "StateDrivenBosco.generated.h"

class UDroneCombatState;
class UPointLightComponent;
class UAudioComponent;
class UDroneReviveState;
class UParticleSystemComponent;
class UDroneFollowState;
class UDroneMiningState;

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

