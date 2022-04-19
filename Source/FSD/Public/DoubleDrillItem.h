#pragma once
#include "CoreMinimal.h"
#include "UpgradableGear.h"
#include "DualAnimatedItem.h"
#include "EDoubleDrillState.h"
#include "Upgradable.h"
#include "RejoinListener.h"
#include "DoubleDrillDamageItem.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "Engine/EngineTypes.h"
#include "DoubleDrillItem.generated.h"

class UFSDPhysicalMaterial;
class UFirstPersonParticleSystemComponent;
class UDoubleDrillAggregator;
class UDamageComponent;
class UFSDAudioComponent;
class UAnimMontage;
class UForceFeedbackEffect;
class UParticleSystem;
class UDamageClass;
class UDialogDataAsset;
class AActor;

UCLASS()
class ADoubleDrillItem : public ADualAnimatedItem, public IUpgradable, public IUpgradableGear, public IRejoinListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UFirstPersonParticleSystemComponent* FP_Left_DrillParticles;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UFirstPersonParticleSystemComponent* FP_Right_DrillParticles;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UFSDAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDoubleDrillAggregator* Aggregator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FPMineMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TPMineMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FPOverheat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TPOverheat;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockParticlesScaleFP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockParticlesScaleTP;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    EDoubleDrillState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementPenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MiningRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeatReductionPerKill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CarveSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarveNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarverRayCastLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarveTerrainDistanceCheck;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float TimeToNextMine;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float CurrentDrillSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FriendlyDamageRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageRate;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageClass;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float friendlyFireModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFuel;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float Fuel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuelUsePerDig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuelUsePerMelee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SupplyStatusWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ShoutOutOfFuel;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHitResult> HitCache;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDoubleDrillDamageItem> DamageCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrillParticlesDuration;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_SimulatingMining, meta=(AllowPrivateAccess=true))
    bool IsMining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsGunslinging, meta=(AllowPrivateAccess=true))
    bool IsGunslinging;
    
    ADoubleDrillItem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StopMining();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StartMining();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DoDamage(const TArray<FDoubleDrillDamageItem>& Targets);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DigBlock(FVector_NetQuantize Start, FVector_NetQuantize End);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat, bool wasDirectHit);
    
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
    
    
    // Fix for true pure virtual functions not being implemented
};

