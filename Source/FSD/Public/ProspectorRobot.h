#pragma once
#include "CoreMinimal.h"
#include "EProspectorRobotState.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "ProspectorRobot.generated.h"

class AActor;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class AProspectorRobot : public AEnemyDeepPathfinderCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorkingArmSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnginePowerMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadResponsiveness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadSearchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadSearchMaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* EngineMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ProspectorState, meta=(AllowPrivateAccess=true))
    EProspectorRobotState ProspectorState;
    
public:
    AProspectorRobot();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetTarget(AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetArmSpeed(float Speed);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateEnd(EProspectorRobotState oldState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateBegin(EProspectorRobotState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ProspectorState(EProspectorRobotState oldState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStateActive(EProspectorRobotState State) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ChangeState(EProspectorRobotState NewState);
    
};

