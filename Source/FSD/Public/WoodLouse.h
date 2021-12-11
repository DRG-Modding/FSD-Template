#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "EWoodLouseState.h"
#include "BumpPlayerHit.h"
#include "GameplayTagContainer.h"
#include "WoodLouse.generated.h"

class USceneComponent;
class UStatusEffect;
class UPawnSensingComponent;
class UFakeMoverSettings;
class AProjectile;
class AActor;
class UAudioComponent;
class USoundBase;
class UDamageClass;
class APawn;

UCLASS()
class AWoodLouse : public AEnemyDeepPathfinderCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* RollingCenter;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPawnSensingComponent* PawnSensing;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EWoodLouseState forceState;
    
    UPROPERTY(EditAnywhere)
    float RollingCenterOffsetOnStanding;
    
    UPROPERTY(EditAnywhere)
    float RollingCenterOffsetOnFold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ChanceToWalk;
    
    UPROPERTY(EditDefaultsOnly)
    bool DebugAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UFakeMoverSettings* FakeMoverSettings;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AProjectile> BurstProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    float BurstTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UStatusEffect>> StatusEffectsOnRoll;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_LastHit)
    FBumpPlayerHit LastHit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TiltModifier;
    
    UPROPERTY(EditDefaultsOnly)
    float BurstXOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float BurstYOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float BurstZOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HighDifficultyCustomProjectileGravity;
    
    UPROPERTY(EditDefaultsOnly)
    int32 BurstCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool InvounerableOnRoll;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool LockToRollMode;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool LockToWalkMode;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ForgetRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ForgetTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RefreshTimeMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RefreshTimeMin;
    
    UPROPERTY(EditDefaultsOnly)
    float BumpPower;
    
    UPROPERTY(EditDefaultsOnly)
    float DirectionalBumpPower;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_State)
    EWoodLouseState CurrentState;
    
    UPROPERTY(Replicated)
    AActor* CurrentTarget;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FoldedStateMaxTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FoldedStateMinTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float UnfoldedStateMaxTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float UnflodedStateMinTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* BumpSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TimeBetweenBumpingSamePlayer;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinBumpDamage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxBumpDamage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BumpDamage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDamageClass* BumpDamageType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxBumpPower;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BumpRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AcceptableAngles;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RollSpeedModifier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RollAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TiltAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* RollingSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName RollingSpeedParamName;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UAudioComponent> RollingSoundComponent;
    
    UPROPERTY(EditDefaultsOnly)
    UFakeMoverSettings* RollMoveSettings;
    
    UPROPERTY(EditDefaultsOnly)
    UFakeMoverSettings* StopRollMoveSettings;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery TargetQuery;
    
    UPROPERTY(Replicated, Transient)
    bool RotateTowardsTarget;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SeeTargetSafetyTime;
    
    UPROPERTY(Replicated, Transient)
    bool WantsToStandUp;
    
    UPROPERTY(Replicated, Transient)
    bool IsShooting;
    
private:
    UPROPERTY(EditAnywhere)
    bool CanStandOnAnySurface;
    
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
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AWoodLouse();
};

