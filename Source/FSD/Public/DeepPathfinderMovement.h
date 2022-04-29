#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"
#include "AsyncPathRequestsInterface.h"
#include "DeepPathFinderPreference.h"
#include "DeepPathFinderType.h"
#include "PauseMovementElapsedDelegate.h"
#include "DeepPathFinderSize.h"
#include "Engine/LatentActionManager.h"
#include "Engine/EngineTypes.h"
#include "PathBeginDelegate.h"
#include "PathFinishedDelegate.h"
#include "RefreshDestinationDelegate.h"
#include "PathStateChangedDelegateDelegate.h"
#include "DeepRepPath.h"
#include "UObject/NoExportTypes.h"
#include "EDeepMovementMode.h"
#include "HandleRotationOptions.h"
#include "FakeMoverState.h"
#include "UObject/NoExportTypes.h"
#include "EDeepMovementState.h"
#include "EOffsetFrom.h"
#include "UObject/NoExportTypes.h"
#include "DeepPathfinderMovement.generated.h"

class ADeepCSGWorld;
class UPawnStatsComponent;
class UFakeMoverSettings;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDeepPathfinderMovement : public UPawnMovementComponent, public IAsyncPathRequestsInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDormancy;
    
    UPROPERTY(EditAnywhere)
    float MaxPawnSpeed;
    
    UPROPERTY(EditAnywhere)
    float StrafeSpeed;
    
    UPROPERTY(EditAnywhere)
    float MinSlowdownAngle;
    
    UPROPERTY(EditAnywhere)
    float MaxSlowdownAngle;
    
    UPROPERTY(EditAnywhere)
    float MaxStrafeDistance;
    
    UPROPERTY(EditAnywhere)
    float AlignDirectionSpeed;
    
    UPROPERTY(EditAnywhere)
    float FleeSpeedBoostMultiplier;
    
    UPROPERTY(EditAnywhere)
    float MaxAcceleration;
    
    UPROPERTY(EditAnywhere)
    float MaxBrakingDeceleration;
    
    UPROPERTY(EditAnywhere)
    float AngleSpeedFilterFactor;
    
    UPROPERTY(EditAnywhere)
    uint32 AIAvoidanceWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DeepPathFinderType PathfinderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DeepPathFinderSize PathfinderSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeleportType MovementPhysicsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DeepPathFinderPreference PathfinderPreference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlignTowardsTargetIfStationary;
    
    UPROPERTY(EditAnywhere)
    float AlignToTargetMinRequiredAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowSlowTickRateWhenNotVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceAPathIfNoneFound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DrawServerPath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPathBegin OnPathBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPauseMovementElapsed OnPauseMovementElapsed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPathFinished OnPathFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRefreshDestination OnRefreshDestination;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPathStateChangedDelegate OnStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADeepCSGWorld* CSGWorld;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_PathMovedDist)
    uint32 PathMovedDist;
    
    UPROPERTY(EditAnywhere, Transient)
    uint32 LocalPathMovedDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Path, meta=(AllowPrivateAccess=true))
    FDeepRepPath Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MoveSettings, meta=(AllowPrivateAccess=true))
    UFakeMoverSettings* MoveSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentPathIndex;
    
    UPROPERTY(EditAnywhere, Transient)
    float CurrentPathFraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Destination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* DestinationActor;
    
    UPROPERTY(EditAnywhere, Transient)
    float AcceptanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool OnlyPartPath;
    
    UPROPERTY(EditAnywhere, Transient)
    float PauseMovementTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EDeepMovementMode MoveMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UPawnStatsComponent* PawnStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastForwardDir;
    
    UPROPERTY(EditAnywhere, Transient)
    float VerticalAngleSpeed;
    
    UPROPERTY(EditAnywhere, Transient)
    float HorizontalAngleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsStrafing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool HasOustandingPathRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool LastPathReachedPreciseDestination;
    
    UPROPERTY(EditAnywhere, Transient)
    float PostponedTickTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool LastMoveSuccessful;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HandleRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TickAfterOwnerDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHandleRotationOptions HandleRotationOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector UnfilteredPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastDestPosUsed;
    
    UPROPERTY(EditAnywhere)
    float DampOmega;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseMovementSpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SnapToPathfinderOnFirstMove;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFakeMoverState FakePhysicsMove;
    
private:
    UPROPERTY(EditAnywhere, Transient)
    float FakeSyncTime;
    
public:
    UDeepPathfinderMovement();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateTargetActor(AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDestination(const FVector& Dest);
    
    UFUNCTION(BlueprintCallable)
    void UnPauseMovement();
    
    UFUNCTION(BlueprintCallable)
    void TeleportTo(const FVector& destLoc, const FRotator& destRot);
    
    UFUNCTION(BlueprintCallable)
    void StopMove();
    
    UFUNCTION(BlueprintCallable)
    void StopAttackStance();
    
    UFUNCTION(BlueprintCallable)
    bool StartMoveToActor(AActor* Dest, float NewAcceptanceRadius);
    
    UFUNCTION(BlueprintCallable)
    bool StartMoveTo(const FVector& Dest, float NewAcceptanceRadius);
    
    UFUNCTION(BlueprintCallable)
    bool StartFleeFrom(const FVector& dangerPos, float Distance);
    
    UFUNCTION(BlueprintCallable)
    void StartFakePhysicsMoveSet(UFakeMoverSettings* NewMoveSettings);
    
    UFUNCTION(BlueprintCallable)
    void StartFakePhysics(const FVector& Vel);
    
    UFUNCTION(BlueprintCallable)
    void StartAttackStance(const FVector& stancePos);
    
    UFUNCTION(BlueprintCallable)
    void SnapToPathfinder();
    
    UFUNCTION(BlueprintCallable)
    void SetSlowDownAngles(const float Min, const float Max);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxSpeed(const float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetHandleRotation(const bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetFreezeAlignment(bool Freeze);
    
    UFUNCTION(BlueprintCallable)
    void SetControlledExternally(bool controlled);
    
    UFUNCTION(BlueprintCallable)
    void PauseMovement(float Time);
    
    UFUNCTION(BlueprintCallable)
    bool PathExistTo(const FVector& Dest);
    
    UFUNCTION(BlueprintCallable)
    bool PathExistsBetween(const FVector& From, const FVector& to);
    
private:
    UFUNCTION()
    void OnRep_PathMovedDist(uint32 lastPathMovedDist);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Path(const FDeepRepPath& oldPath);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MoveSettings(const UFakeMoverSettings* NewMoveSettings);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFreezeAlignmentSet() const;
    
    UFUNCTION(BlueprintCallable)
    float GetVerticalAngleSpeed();
    
    UFUNCTION(BlueprintCallable)
    void GetRandomSpawnPointAtApproximateDistance_Async(const FVector& Origin, float Distance, bool& success, FVector& outPos, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void GetRandomReachablePointAtApproximateDistance_Async(const FVector& Origin, float Distance, bool& success, FVector& outPos, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    bool GetRandomReachablePointAtApproximateDistance(const FVector& Origin, float Distance, FVector& outPos);
    
    UFUNCTION(BlueprintCallable)
    FVector GetPathForwardDirection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    DeepPathFinderType GetPathfinderType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    DeepPathFinderSize GetPathfinderSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDeepMovementState GetMovementState() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetIsStrafing();
    
    UFUNCTION(BlueprintCallable)
    float GetHorizontalAngleSpeed();
    
    UFUNCTION(BlueprintCallable)
    UFakeMoverSettings* GetCurrentFakePhysicsMoveSet();
    
    UFUNCTION(BlueprintCallable)
    bool FlyToConnectedPosition(const FVector& destPos);
    
    UFUNCTION(BlueprintCallable)
    bool FindPointKeepingDistance(const FVector& Origin, float MinDistance, float MaxDistance, const FVector& Target, float idealTargetDistance, FVector& outPos);
    
    UFUNCTION(BlueprintCallable)
    FVector FindPathfinderPointBelow(const FVector& Pos, float HeightOffset);
    
    UFUNCTION(BlueprintCallable)
    FVector FindPathfinderPointAbove(const FVector& Pos, float HeightOffset);
    
    UFUNCTION(BlueprintCallable)
    FVector FindPathfinderOffsetPoint(const FVector& Pos, const EOffsetFrom offsetFrom, float HeightOffset);
    
    UFUNCTION(BlueprintCallable)
    FVector FindNearestPathfinderPointOverrideType(const FVector& Pos, DeepPathFinderType overrideType, float MaxDistance);
    
    UFUNCTION(BlueprintCallable)
    void FindNearestPathfinderPoint_Async(const FVector& Pos, float MaxDistance, bool& success, FVector& outPos, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintPure)
    FVector FindNearestPathfinderPoint(const FVector& Pos, float MaxDistance) const;
    
    UFUNCTION(BlueprintCallable)
    FVector FindNearestConnectedPathfinderPoint(const FVector& Pos, float MaxDistance);
    
    UFUNCTION(BlueprintCallable)
    FQuat CalcPathfinderOrientation(const FVector& Pos, const FVector& forwardDir);
    
    UFUNCTION(BlueprintCallable)
    bool BackOffFrom(const FVector& dangerPos, float Distance);
    
    UFUNCTION(BlueprintCallable)
    void AddFakeMoverImpulse(const FVector& Impulse);
    
    
    // Fix for true pure virtual functions not being implemented
};

