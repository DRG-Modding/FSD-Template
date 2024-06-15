#pragma once
#include "CoreMinimal.h"
#include "EDrillevatorState.h"
#include "TaggedActor.h"
#include "Drillevator.generated.h"

class UMaterialInstanceDynamic;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ADrillevator : public ATaggedActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EDrillevatorState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MovementEnabled, meta=(AllowPrivateAccess=true))
    bool MovementEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TargetDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerDepth, meta=(AllowPrivateAccess=true))
    float ServerDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeatMaterialSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeatParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CenterEngineHeatWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CenterEngineMaxHeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DynMatCenterEngineHeat;
    
public:
    ADrillevator(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTargetDepth(float Depth);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetState(EDrillevatorState NewState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMovementSpeed(float NewSpeed);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMovementEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State(EDrillevatorState oldState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerDepth();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MovementEnabled(bool OldMovementEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMovingChanged(bool IsMoving);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitState(EDrillevatorState oldState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterState(EDrillevatorState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAtTargetDepth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USkeletalMeshComponent* GetCenterEngineComponent() const;
    
};

