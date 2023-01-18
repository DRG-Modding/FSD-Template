#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "FSDAIController.h"
#include "FacilityTurretController.generated.h"

class AActor;
class UAIPerceptionComponent;
class UHealthComponentBase;

UCLASS(Blueprintable)
class AFacilityTurretController : public AFSDAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionComponent* Perception;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RememberTargetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RetargetOnAttackChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RespectAttack;
    
public:
    AFacilityTurretController();
private:
    UFUNCTION(BlueprintCallable)
    void OnTurretsAttackingChanged(bool IsAttacking);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetRevived();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTargetDied(UHealthComponentBase* Health);
    
    UFUNCTION(BlueprintCallable)
    void OnPerceptionUpdated(AActor* sensedActor, FAIStimulus Stimulus);
    
};

