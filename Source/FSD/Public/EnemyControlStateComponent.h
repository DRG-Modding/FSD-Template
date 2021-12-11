#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "EEnemyControlState.h"
#include "ControlEnemyState.h"
#include "UObject/NoExportTypes.h"
#include "EnemyControlStateComponent.generated.h"

class UAIPlayerControlComponent;
class UAnimMontage;

UCLASS()
class FSD_API UEnemyControlStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool UseThirdPersonCam;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_StateData)
    FControlEnemyState StateData;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ControlState)
    EEnemyControlState ControlState;
    
    UPROPERTY(Replicated, Transient)
    FQuat AngularVelocity;
    
    UPROPERTY(Replicated, Transient)
    FQuat ControlRotation;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerExit();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StateData(const FControlEnemyState& oldState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ControlState(EEnemyControlState oldState);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyCrashMontageEnded(UAnimMontage* Montage, bool interrupted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnControllingEnemyAttached();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnControllingEnemy(bool IsControlling);
    
    UFUNCTION(BlueprintCallable)
    void JumpPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIPlayerControlComponent* GetAiPlayerControlComponent();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UEnemyControlStateComponent();
};

