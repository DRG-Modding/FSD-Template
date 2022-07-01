#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "UObject/NoExportTypes.h"
#include "ControlEnemyState.h"
#include "EEnemyControlState.h"
#include "EnemyControlStateComponent.generated.h"

class UAnimMontage;
class UAIPlayerControlComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UEnemyControlStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseThirdPersonCam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StateData, meta=(AllowPrivateAccess=true))
    FControlEnemyState StateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ControlState, meta=(AllowPrivateAccess=true))
    EEnemyControlState ControlState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FQuat AngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FQuat ControlRotation;
    
public:
    UEnemyControlStateComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
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
    
};

