#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "FootStepNotifyTarget.h"
#include "UObject/NoExportTypes.h"
#include "EMoveDirection.h"
#include "RandomWalkCycleEntry.h"
#include "ESpiderDeathAnimationCategory.h"
#include "SpiderAnimInstance.generated.h"

class USoundCue;
class UParticleSystem;
class UEnemyPlaySoundKey;
class UEnemySpawnEffectsKey;
class UAnimSequenceBase;

UCLASS(Blueprintable, NonTransient)
class USpiderAnimInstance : public UEnemyAnimInstance, public IFootStepNotifyTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Velocity;
    
    UPROPERTY(EditAnywhere)
    float WalkCycleSpeed;
    
    UPROPERTY(EditAnywhere)
    float StartMovingSpeed;
    
    UPROPERTY(EditAnywhere)
    float StopMovingSpeed;
    
    UPROPERTY(EditAnywhere)
    float WalkCycleMinRate;
    
    UPROPERTY(EditAnywhere, Transient)
    float WalkCyclePlayRate;
    
    UPROPERTY(EditAnywhere, Transient)
    float MeshScale;
    
    UPROPERTY(EditAnywhere, Transient)
    float Direction;
    
    UPROPERTY(EditAnywhere)
    float PathDirectionLerpSpeedIn;
    
    UPROPERTY(EditAnywhere)
    float PathDirectionLerpSpeedOut;
    
    UPROPERTY(EditAnywhere, Transient)
    float PathDirection;
    
    UPROPERTY(EditAnywhere, Transient)
    float HorizontalAngularSpeed;
    
    UPROPERTY(EditAnywhere, Transient)
    float HorizontalAngularSpeed_Abs;
    
    UPROPERTY(EditAnywhere, Transient)
    float VerticalAngularSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMoveDirection MoveDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsStrafing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsMovingAndStrafing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsFrozen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsStaggered;
    
    UPROPERTY(EditAnywhere, Transient)
    float StaggerStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsAirborne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FootstepParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* FootstepSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FootStepLeftBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FootStepRightBoneName;
    
    UPROPERTY(EditAnywhere)
    float FootStepParticleCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UEnemyPlaySoundKey*, USoundCue*> PlaySoundByKeyMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UEnemySpawnEffectsKey*, UParticleSystem*> SpawnEffectsByKeyMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RandomWalkCycleIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandomWalkCycleEntry> RandomWalkCycles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool TurnToIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IdleToTurnLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IdleToTurnRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool TurnToWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool WalkToTurnRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool WalkToTurnLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsInFakePhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESpiderDeathAnimationCategory DeathAnimationCategory;
    
public:
    USpiderAnimInstance();
    UFUNCTION(BlueprintCallable)
    void SetMeshScale(float newScale);
    
    UFUNCTION(BlueprintCallable)
    void SetDeathAnimationCategory(ESpiderDeathAnimationCategory Category);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDeathAnimation(UAnimSequenceBase* Animation);
    
    UFUNCTION(BlueprintCallable)
    void PlayForcedCycle(float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotStrafing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotStaggered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotFrozen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotAirborne() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

