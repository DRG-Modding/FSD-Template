#pragma once
#include "CoreMinimal.h"
#include "HostileGuntowerModule.h"
#include "Perception/AIPerceptionTypes.h"
#include "HostileTargetingGuntowerModule.generated.h"

class AActor;

UCLASS()
class AHostileTargetingGuntowerModule : public AHostileGuntowerModule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<AActor*> SensedTargets;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TurretRotationSpeed;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    AActor* TargetedActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TargetingRotationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName TargetingFromBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeUntilForgetTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AlwaysUpdateAimRotation;
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPerceptionUpdated(AActor* sensedActor, FAIStimulus Stimulus);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AHostileTargetingGuntowerModule();
};

