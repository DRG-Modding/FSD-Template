#pragma once
#include "CoreMinimal.h"
#include "DualAnimatedItem.h"
#include "RejoinListener.h"
#include "Upgradable.h"
#include "UpgradableGear.h"
#include "EDoubleDrillState.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "DoubleDrillDamageItem.h"
#include "Engine/NetSerialization.h"
#include "DoubleDrillItem.generated.h"

class UFSDAudioComponent;
class UFirstPersonParticleSystemComponent;
class UForceFeedbackEffect;
class UDamageComponent;
class UDoubleDrillAggregator;
class UAnimMontage;
class UParticleSystem;
class UDialogDataAsset;
class UDamageClass;
class AActor;
class UFSDPhysicalMaterial;

UCLASS()
class ADoubleDrillItem : public ADualAnimatedItem, public IUpgradable, public IUpgradableGear, public IRejoinListener {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    UFirstPersonParticleSystemComponent* FP_Left_DrillParticles;
    
    UPROPERTY(Export, VisibleAnywhere)
    UFirstPersonParticleSystemComponent* FP_Right_DrillParticles;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UFSDAudioComponent* AudioComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDoubleDrillAggregator* Aggregator;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* FPMineMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* TPMineMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* FPOverheat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* TPOverheat;
    
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
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EDoubleDrillState State;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MovementPenalty;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MiningRate;
    
    UPROPERTY(EditAnywhere)
    float HeatReductionPerKill;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector CarveSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CarveNoise;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CarverRayCastLength;
    
    UPROPERTY(EditAnywhere)
    float CarveTerrainDistanceCheck;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float TimeToNextMine;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float CurrentDrillSpeed;
    
    UPROPERTY(EditAnywhere)
    float DamageDistance;
    
    UPROPERTY(EditAnywhere)
    float DamageRadius;
    
    UPROPERTY(EditAnywhere)
    float FriendlyDamageRadius;
    
    UPROPERTY(EditAnywhere)
    float DamageRate;
    
    UPROPERTY(VisibleAnywhere)
    float Damage;
    
    UPROPERTY(VisibleAnywhere)
    float ArmorDamageMultiplier;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UDamageClass* DamageClass;
    
    UPROPERTY(VisibleAnywhere)
    float friendlyFireModifier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxFuel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Fuel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FuelUsePerDig;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FuelUsePerMelee;
    
    UPROPERTY(EditAnywhere)
    float SupplyStatusWeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* ShoutOutOfFuel;
    
    UPROPERTY(Transient)
    TArray<FHitResult> HitCache;
    
    UPROPERTY(Transient)
    TArray<FDoubleDrillDamageItem> DamageCache;
    
    UPROPERTY(EditAnywhere)
    float DrillParticlesDuration;
    
    UPROPERTY(ReplicatedUsing=OnRep_SimulatingMining)
    bool IsMining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsGunslinging)
    bool IsGunslinging;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StopMining();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StartMining();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DoDamage(const TArray<FDoubleDrillDamageItem>& Targets);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DigBlock(FVector_NetQuantize Start, FVector_NetQuantize End);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopDrilling();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartDrilling();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SimulatingMining();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsGunslinging();
    
    UFUNCTION(BlueprintCallable)
    void OnDrillParticlesTimerElapsed();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_Resupply(float percentage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDrillDamage();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_SimulateDigDebris(FVector_NetQuantize Position, int32 DebrisIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_SimulateDigBlock(FVector_NetQuantize Position, bool spawnParticles, int32 Material);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_SimulateDamage(const TArray<FDoubleDrillDamageItem>& Targets);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ADoubleDrillItem();
    
    // Fix for true pure virtual functions not being implemented
};

