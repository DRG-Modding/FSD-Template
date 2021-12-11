#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "FootStepNotifyTarget.h"
#include "UObject/NoExportTypes.h"
#include "EMoveDirection.h"
#include "RandomWalkCycleEntry.h"
#include "SpiderAnimInstance.generated.h"

class USoundCue;
class UEnemySpawnEffectsKey;
class UParticleSystem;
class UEnemyPlaySoundKey;
class UAnimSequenceBase;

UCLASS(NonTransient)
class USpiderAnimInstance : public UEnemyAnimInstance, public IFootStepNotifyTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float Speed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector Velocity;
    
    UPROPERTY(EditAnywhere)
    float WalkCycleSpeed;
    
    UPROPERTY(EditAnywhere)
    float StartMovingSpeed;
    
    UPROPERTY(EditAnywhere)
    float StopMovingSpeed;
    
    UPROPERTY(EditAnywhere)
    float WalkCycleMinRate;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float WalkCyclePlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float MeshScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float Direction;
    
    UPROPERTY(EditAnywhere)
    float PathDirectionLerpSpeedIn;
    
    UPROPERTY(EditAnywhere)
    float PathDirectionLerpSpeedOut;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float PathDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float HorizontalAngularSpeed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float HorizontalAngularSpeed_Abs;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float VerticalAngularSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    EMoveDirection MoveDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsMoving;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsStrafing;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsMovingAndStrafing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsFrozen;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsStaggered;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float StaggerStrength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsAirborne;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* FootstepParticle;
    
    UPROPERTY(EditAnywhere)
    USoundCue* FootstepSound;
    
    UPROPERTY(EditAnywhere)
    FName FootStepLeftBoneName;
    
    UPROPERTY(EditAnywhere)
    FName FootStepRightBoneName;
    
    UPROPERTY(EditAnywhere)
    float FootStepParticleCullDistance;
    
    UPROPERTY(EditAnywhere)
    TMap<UEnemyPlaySoundKey*, USoundCue*> PlaySoundByKeyMap;
    
    UPROPERTY(EditAnywhere)
    TMap<UEnemySpawnEffectsKey*, UParticleSystem*> SpawnEffectsByKeyMap;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 RandomWalkCycleIndex;
    
    UPROPERTY(EditAnywhere)
    TArray<FRandomWalkCycleEntry> RandomWalkCycles;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool TurnToIdle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IdleToTurnLeft;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IdleToTurnRight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool TurnToWalk;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool WalkToTurnRight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool WalkToTurnLeft;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsInFakePhysics;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMeshScale(float newScale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDeathAnimation(UAnimSequenceBase* Animation);
    
    UFUNCTION(BlueprintCallable)
    void PlayForcedCycle(float Duration);
    
    USpiderAnimInstance();
    
    // Fix for true pure virtual functions not being implemented
};

