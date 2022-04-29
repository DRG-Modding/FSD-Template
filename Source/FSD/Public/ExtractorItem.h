#pragma once
#include "CoreMinimal.h"
#include "Throwable.h"
#include "AnimatedItem.h"
#include "CharacterChangedDelegateDelegate.h"
#include "FloatDelegateDelegate.h"
#include "EExtractorState.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"
#include "ExtractorItem.generated.h"

class UPointLightComponent;
class UParticleSystem;
class UBoxComponent;
class USkeletalMeshComponent;
class UFirstPersonParticleSystemComponent;
class UFSDAudioComponent;
class UParticleSystemComponent;
class UAnimMontage;
class UForceFeedbackEffect;
class UResourceData;
class UDialogDataAsset;
class USoundCue;
class AResourceChunk;

UCLASS(Blueprintable)
class FSD_API AExtractorItem : public AAnimatedItem, public IThrowable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatDelegate OnCurrentLoadChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterChangedDelegate OnCharacterEquipChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* DroppedCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* DroppedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFirstPersonParticleSystemComponent* FP_DrillParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFSDAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPointLightComponent* SurfaceLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MeltingParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* InvalidSurfaceParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* FPMuzzleParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* FPMuzzleInvalidParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* TPMuzzleParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* TPMuzzleInvalidParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FPMineMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TPMineMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FPGunsling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TPGunsling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MiningSpeedAudioParamterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DrillParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* DrillRumble;
    
    UPROPERTY(EditAnywhere)
    float BlockParticlesScaleFP;
    
    UPROPERTY(EditAnywhere)
    float BlockParticlesScaleTP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EExtractorState State;
    
    UPROPERTY(EditAnywhere)
    float MovementPenalty;
    
    UPROPERTY(EditAnywhere)
    float CarverRayCastLength;
    
    UPROPERTY(EditAnywhere)
    float CarveTerrainDistanceCheck;
    
    UPROPERTY(EditAnywhere, Transient)
    float CurrentDrillSpeed;
    
    UPROPERTY(EditAnywhere)
    float DrillParticlesDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* ExtractetMaterial;
    
    UPROPERTY(EditAnywhere)
    float TimeBeforeInvalidShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* InvalidSurfaceShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ShoutFull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* DigSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SimulatingMining, meta=(AllowPrivateAccess=true))
    bool IsMining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsGunslinging, meta=(AllowPrivateAccess=true))
    bool IsGunslinging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool ReadyToExtract;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* VacuumEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ChunkSplatEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ChunkSplatSound;
    
    UPROPERTY(EditAnywhere)
    float MaxDifference;
    
    UPROPERTY(EditAnywhere)
    float MeltingTime;
    
    UPROPERTY(EditAnywhere)
    float ChunkMultiplier;
    
    UPROPERTY(EditAnywhere)
    float CollectChunkCooldown;
    
    UPROPERTY(EditAnywhere)
    float CrossfadeSpeed;
    
    UPROPERTY(EditAnywhere)
    float VacuumEffectOffset;
    
    UPROPERTY(EditAnywhere)
    float MaxCapacity;
    
    UPROPERTY(EditAnywhere)
    float PlayerCountBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor SurfaceLightInitialColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor SurfaceLightEndColor;
    
    UPROPERTY(EditAnywhere)
    float SurfaceLightMinIntensity;
    
    UPROPERTY(EditAnywhere)
    float SurfaceLightMaxIntensity;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentLoad)
    float CurrentLoad;
    
public:
    AExtractorItem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void SetCanPickup(bool canPickup);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StopMining();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StartMining();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetReadyToExtract(bool IsReady);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DigBlock(FVector_NetQuantize Start, FVector_NetQuantize End);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_CollectChunk(AResourceChunk* chunk);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetCurrentLoad();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnValidSurfaceChanged(bool IsValid);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnThrown(FVector Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopDrilling();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartDrilling();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SimulatingMining();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsGunslinging();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentLoad();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCurrentLoadChanged(float load);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnChunkCooldownOver();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBoxComponent* GetRootCollider() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_SimulateDigBlock(FVector_NetQuantize Position, bool spawnParticles, int32 Material);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ChunkSplat(AResourceChunk* chunk);
    
    UFUNCTION(BlueprintCallable)
    void AddResource(float Amount);
    
    
    // Fix for true pure virtual functions not being implemented
};

