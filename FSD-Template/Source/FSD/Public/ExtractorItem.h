#pragma once
#include "CoreMinimal.h"
#include "AnimatedItem.h"
#include "Throwable.h"
#include "EExtractorState.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"
#include "ExtractorItem.generated.h"

class UParticleSystemComponent;
class UBoxComponent;
class ACharacter;
class UFirstPersonParticleSystemComponent;
class USkeletalMeshComponent;
class UFSDAudioComponent;
class UPointLightComponent;
class UAnimMontage;
class UParticleSystem;
class UForceFeedbackEffect;
class UResourceData;
class UDialogDataAsset;
class USoundCue;
class AResourceChunk;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FExtractorItemOnCurrentLoadChangedEvent, float, FloatValue);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FExtractorItemOnCharacterEquipChange, ACharacter*, Character);

UCLASS()
class AExtractorItem : public AAnimatedItem, public IThrowable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FExtractorItemOnCurrentLoadChangedEvent OnCurrentLoadChangedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FExtractorItemOnCharacterEquipChange OnCharacterEquipChange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    UBoxComponent* DroppedCollider;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* DroppedMesh;
    
    UPROPERTY(Export, VisibleAnywhere)
    UFirstPersonParticleSystemComponent* FP_DrillParticles;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UFSDAudioComponent* AudioComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPointLightComponent* SurfaceLight;
    
    UPROPERTY(Export, VisibleAnywhere)
    UParticleSystemComponent* MeltingParticles;
    
    UPROPERTY(Export, VisibleAnywhere)
    UParticleSystemComponent* InvalidSurfaceParticles;
    
    UPROPERTY(Export, VisibleAnywhere)
    UParticleSystemComponent* FPMuzzleParticles;
    
    UPROPERTY(Export, VisibleAnywhere)
    UParticleSystemComponent* FPMuzzleInvalidParticles;
    
    UPROPERTY(Export, VisibleAnywhere)
    UParticleSystemComponent* TPMuzzleParticles;
    
    UPROPERTY(Export, VisibleAnywhere)
    UParticleSystemComponent* TPMuzzleInvalidParticles;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* FPMineMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* TPMineMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* FPGunsling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* TPGunsling;
    
    UPROPERTY(EditAnywhere)
    FName MiningSpeedAudioParamterName;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* DrillParticles;
    
    UPROPERTY(EditAnywhere)
    UForceFeedbackEffect* DrillRumble;
    
    UPROPERTY(EditAnywhere)
    float BlockParticlesScaleFP;
    
    UPROPERTY(EditAnywhere)
    float BlockParticlesScaleTP;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    EExtractorState State;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MovementPenalty;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CarverRayCastLength;
    
    UPROPERTY(EditAnywhere)
    float CarveTerrainDistanceCheck;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float CurrentDrillSpeed;
    
    UPROPERTY(EditAnywhere)
    float DrillParticlesDuration;
    
    UPROPERTY(EditAnywhere)
    UResourceData* ExtractetMaterial;
    
    UPROPERTY(EditAnywhere)
    float TimeBeforeInvalidShout;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* InvalidSurfaceShout;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* ShoutFull;
    
    UPROPERTY(EditAnywhere)
    USoundCue* DigSound;
    
    UPROPERTY(ReplicatedUsing=OnRep_SimulatingMining)
    bool IsMining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsGunslinging)
    bool IsGunslinging;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool ReadyToExtract;
    
protected:
    UPROPERTY(EditAnywhere)
    UParticleSystem* VacuumEffect;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ChunkSplatEffect;
    
    UPROPERTY(EditAnywhere)
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
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxCapacity;
    
    UPROPERTY(EditAnywhere)
    float PlayerCountBonus;
    
    UPROPERTY(EditAnywhere)
    FColor SurfaceLightInitialColor;
    
    UPROPERTY(EditAnywhere)
    FColor SurfaceLightEndColor;
    
    UPROPERTY(EditAnywhere)
    float SurfaceLightMinIntensity;
    
    UPROPERTY(EditAnywhere)
    float SurfaceLightMaxIntensity;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_CurrentLoad)
    float CurrentLoad;
    
public:
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
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
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
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AExtractorItem();
    
    // Fix for true pure virtual functions not being implemented
};

