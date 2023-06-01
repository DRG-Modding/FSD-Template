#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "ECharacterCameraMode.h"
#include "ECharacterState.h"
#include "JetBootsDelegateDelegate.h"
#include "JetBootsMovementComponent.generated.h"

class AActor;
class APlayerCharacter;
class UAudioComponent;
class UFXSystemAsset;
class UFXSystemComponent;
class UJetBootsSettings;
class UNiagaraComponent;
class UNiagaraSystem;
class UPrimitiveComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class USoundCue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UJetBootsMovementComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJetBootsDelegate FuelUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJetBootsDelegate FuelUpdatedNonLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UJetBootsSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* UseSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* DeactivatedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OverHeatSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* UseAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* OverHeatAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* DeactivatedAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* TP_UseAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* TP_OverHeatAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* TP_DeactivatedAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* FootParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* FootParticlesFP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FootSocketNameLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FootSocketNameRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* FootAttachMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* LFootAttachMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* RFootAttachMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* LeftFootParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* RightFootParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* FPFootParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FromJumpDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FromTerrainStartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverHeatAtPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AddPlayerAirVelocityToThrowFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentJetFuel, meta=(AllowPrivateAccess=true))
    float CurrentJetFuel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsUsing, meta=(AllowPrivateAccess=true))
    bool IsUsing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool isFromTakeOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_OverHeated, meta=(AllowPrivateAccess=true))
    bool overHeated;
    
public:
    UJetBootsMovementComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetOverheated(bool Current);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetIsUsing(bool Current, bool last, bool NewIsFromTakeOff);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetCurrentJetFuel(float Current);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveJetBoots();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_OnTakeOffLocal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_OnOverheatedChanged(bool NewOverHeated);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_OnDestroy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_OnCharacterSet(APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_OnActiveChangedServer(bool IsActive, bool fromTakeOff);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_OnActiveChangedNonLocal(bool IsActive, bool fromTakeOff);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_OnActiveChangedLocal(bool IsActive, bool fromTakeOff);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStateChanged(ECharacterState State);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OverHeated(bool lastOverheated);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsUsing(bool lastUsing);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentJetFuel();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerCharacterHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnJumpReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnJumpPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnCameraModeChanged(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetIsUsing(bool NewIsUsing);
    
};

