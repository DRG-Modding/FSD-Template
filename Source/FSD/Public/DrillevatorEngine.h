#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EDrillevatorEngineState.h"
#include "DrillevatorEngine.generated.h"

class UMaterialInstanceDynamic;
class USingleUsableComponent;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class ADrillevatorEngine : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EDrillevatorEngineState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Health, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrainRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthPercent_Green;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthPercent_Yellow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DamageLevel, meta=(AllowPrivateAccess=true))
    int32 DamageLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LastRepairProgress, meta=(AllowPrivateAccess=true))
    float LastRepairProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USingleUsableComponent* MaintainerUsableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* EngineMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* EngineMaterial;
    
public:
    ADrillevatorEngine(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetState(EDrillevatorEngineState NewState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetLastRepairProgress(float InProgress);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHealth(float InHealth);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRep_State(EDrillevatorEngineState oldState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LastRepairProgress();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Health();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRep_DamageLevel();
    
    UFUNCTION(BlueprintCallable)
    void EvaluateDamageLevel();
    
};

