#pragma once
#include "CoreMinimal.h"
#include "FSDAIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "FacilityTurretController.generated.h"

class UAIPerceptionComponent;
class UHealthComponentBase;
class AActor;

UCLASS()
class AFacilityTurretController : public AFSDAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAIPerceptionComponent* Perception;
    
private:
    UPROPERTY(EditAnywhere)
    float RememberTargetTime;
    
    UPROPERTY(EditAnywhere)
    float RetargetOnAttackChance;
    
    UPROPERTY(EditAnywhere)
    bool RespectAttack;
    
    UFUNCTION(BlueprintCallable)
    void OnTurretsAttackingChanged(bool IsAttacking);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetRevived();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTargetDied(UHealthComponentBase* Health);
    
    UFUNCTION(BlueprintCallable)
    void OnPerceptionUpdated(AActor* sensedActor, FAIStimulus Stimulus);
    
    AFacilityTurretController();
};

