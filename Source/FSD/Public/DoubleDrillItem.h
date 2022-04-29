#pragma once
#include "CoreMinimal.h"
#include "RejoinListener.h"
#include "DualAnimatedItem.h"
#include "Upgradable.h"
#include "UpgradableGear.h"
#include "DoubleDrillDamageItem.h"
#include "EDoubleDrillState.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "DoubleDrillItem.generated.h"

class UFSDAudioComponent;
class UDoubleDrillAggregator;
class UFirstPersonParticleSystemComponent;
class UDamageComponent;
class UAnimMontage;
class UParticleSystem;
class UForceFeedbackEffect;
class UDamageClass;
class UDialogDataAsset;
class AActor;
class UFSDPhysicalMaterial;

UCLASS(Blueprintable)
class ADoubleDrillItem : public ADualAnimatedItem, public IUpgradable, public IUpgradableGear, public IRejoinListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFirstPersonParticleSystemComponent* FP_Left_DrillParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFirstPersonParticleSystemComponent* FP_Right_DrillParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFSDAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
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
    
    UPROPERTY(EditAnywhere)
    float BlockParticlesScaleFP;
    
    UPROPERTY(EditAnywhere)
    float BlockParticlesScaleTP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EDoubleDrillState State;
    
    UPROPERTY(EditAnywhere)
    float MovementPenalty;
    
    UPROPERTY(EditAnywhere)
    float MiningRate;
    
    UPROPERTY(EditAnywhere)
    float HeatReductionPerKill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CarveSize;
    
    UPROPERTY(EditAnywhere)
    float CarveNoise;
    
    UPROPERTY(EditAnywhere)
    float CarverRayCastLength;
    
    UPROPERTY(EditAnywhere)
    float CarveTerrainDistanceCheck;
    
    UPROPERTY(EditAnywhere, Transient)
    float TimeToNextMine;
    
    UPROPERTY(EditAnywhere, Transient)
    float CurrentDrillSpeed;
    
    UPROPERTY(EditAnywhere)
    float DamageDistance;
    
    UPROPERTY(EditAnywhere)
    float DamageRadius;
    
    UPROPERTY(EditAnywhere)
    float FriendlyDamageRadius;
    
    UPROPERTY(EditAnywhere)
    float DamageRate;
    
    UPROPERTY(EditAnywhere)
    float Damage;
    
    UPROPERTY(EditAnywhere)
    float ArmorDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageClass;
    
    UPROPERTY(EditAnywhere)
    float friendlyFireModifier;
    
    UPROPERTY(EditAnywhere)
    float MaxFuel;
    
    UPROPERTY(EditAnywhere, Transient)
    float Fuel;
    
    UPROPERTY(EditAnywhere)
    float FuelUsePerDig;
    
    UPROPERTY(EditAnywhere)
    float FuelUsePerMelee;
    
    UPROPERTY(EditAnywhere)
    float SupplyStatusWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ShoutOutOfFuel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHitResult> HitCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDoubleDrillDamageItem> DamageCache;
    
    UPROPERTY(EditAnywhere)
    float DrillParticlesDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SimulatingMining, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(Client, Reliable)
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

