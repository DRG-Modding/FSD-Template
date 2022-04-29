#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "EWoodLouseState.h"
#include "BumpPlayerHit.h"
#include "GameplayTagContainer.h"
#include "WoodLouse.generated.h"

class UPawnSensingComponent;
class USceneComponent;
class UStatusEffect;
class UFakeMoverSettings;
class AProjectile;
class AActor;
class USoundBase;
class UDamageClass;
class UAudioComponent;
class APawn;

UCLASS(Blueprintable)
class AWoodLouse : public AEnemyDeepPathfinderCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* RollingCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPawnSensingComponent* PawnSensing;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWoodLouseState forceState;
    
    UPROPERTY(EditAnywhere)
    float RollingCenterOffsetOnStanding;
    
    UPROPERTY(EditAnywhere)
    float RollingCenterOffsetOnFold;
    
    UPROPERTY(EditAnywhere)
    float ChanceToWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFakeMoverSettings* FakeMoverSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectile> BurstProjectileClass;
    
    UPROPERTY(EditAnywhere)
    float BurstTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UStatusEffect>> StatusEffectsOnRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_LastHit, meta=(AllowPrivateAccess=true))
    FBumpPlayerHit LastHit;
    
    UPROPERTY(EditAnywhere)
    float TiltModifier;
    
    UPROPERTY(EditAnywhere)
    float BurstXOffset;
    
    UPROPERTY(EditAnywhere)
    float BurstYOffset;
    
    UPROPERTY(EditAnywhere)
    float BurstZOffset;
    
    UPROPERTY(EditAnywhere)
    float HighDifficultyCustomProjectileGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BurstCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvounerableOnRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LockToRollMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LockToWalkMode;
    
    UPROPERTY(EditAnywhere)
    float ForgetRange;
    
    UPROPERTY(EditAnywhere)
    float ForgetTime;
    
    UPROPERTY(EditAnywhere)
    float RefreshTimeMax;
    
    UPROPERTY(EditAnywhere)
    float RefreshTimeMin;
    
    UPROPERTY(EditAnywhere)
    float BumpPower;
    
    UPROPERTY(EditAnywhere)
    float DirectionalBumpPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EWoodLouseState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* CurrentTarget;
    
    UPROPERTY(EditAnywhere)
    float FoldedStateMaxTime;
    
    UPROPERTY(EditAnywhere)
    float FoldedStateMinTime;
    
    UPROPERTY(EditAnywhere)
    float UnfoldedStateMaxTime;
    
    UPROPERTY(EditAnywhere)
    float UnflodedStateMinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* BumpSound;
    
    UPROPERTY(EditAnywhere)
    float TimeBetweenBumpingSamePlayer;
    
    UPROPERTY(EditAnywhere)
    float MinBumpDamage;
    
    UPROPERTY(EditAnywhere)
    float MaxBumpDamage;
    
    UPROPERTY(EditAnywhere)
    float BumpDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* BumpDamageType;
    
    UPROPERTY(EditAnywhere)
    float MaxBumpPower;
    
    UPROPERTY(EditAnywhere)
    float BumpRange;
    
    UPROPERTY(EditAnywhere)
    float AcceptableAngles;
    
    UPROPERTY(EditAnywhere)
    float RollSpeedModifier;
    
    UPROPERTY(EditAnywhere)
    float RollAlpha;
    
    UPROPERTY(EditAnywhere)
    float TiltAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* RollingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RollingSpeedParamName;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UAudioComponent> RollingSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFakeMoverSettings* RollMoveSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFakeMoverSettings* StopRollMoveSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TargetQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool RotateTowardsTarget;
    
    UPROPERTY(EditAnywhere)
    float SeeTargetSafetyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool WantsToStandUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsShooting;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanStandOnAnySurface;
    
public:
    AWoodLouse();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchedState(EWoodLouseState NewCurrentState);
    
    UFUNCTION(BlueprintCallable)
    void StopSpecial();
    
    UFUNCTION(BlueprintCallable)
    void StartSpecial();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetWantsToStandUp(bool aWantsToStandUp);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetState(EWoodLouseState aState);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetRotateToTarget(bool aRotateToTarget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SeePawn(APawn* aSenPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LastHit();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWoodLouseState GetRollerState() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BumpedTarget();
    
};

