#pragma once
#include "CoreMinimal.h"
#include "DroneBase.h"
#include "StateDrivenBosco.generated.h"

class UDroneFollowState;
class UPointLightComponent;
class UDroneReviveState;
class UAudioComponent;
class UDroneMiningState;
class UParticleSystemComponent;
class UDroneCombatState;

UCLASS(Blueprintable)
class AStateDrivenBosco : public ADroneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointLightComponent* PointLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* ThrusterSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* L_ThrusterParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* R_ThrusterParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDroneFollowState* FollowState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDroneCombatState* CombatState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDroneMiningState* MiningState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDroneReviveState* ReviveState;
    
    AStateDrivenBosco();
};

