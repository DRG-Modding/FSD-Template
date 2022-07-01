#pragma once
#include "CoreMinimal.h"
#include "DeepPathFinderSize.h"
#include "EDeepMovementMode.h"
#include "GameFramework/PawnMovementComponent.h"
#include "PathBeginDelegate.h"
#include "AsyncPathRequestsInterface.h"
#include "EOffsetFrom.h"
#include "DeepPathFinderPreference.h"
#include "DeepPathFinderType.h"
#include "PauseMovementElapsedDelegate.h"
#include "EDeepMovementState.h"
#include "Engine/EngineTypes.h"
#include "FakeMoverState.h"
#include "PathFinishedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "RefreshDestinationDelegate.h"
#include "PathStateChangedDelegateDelegate.h"
#include "HandleRotationOptions.h"
#include "DeepRepPath.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LatentActionManager.h"
#include "DeepPathfinderMovement.generated.h"

class ADeepCSGWorld;
class UFakeMoverSettings;
class AActor;
class UPawnStatsComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDeepPathfinderMovement : public UPawnMovementComponent, public IAsyncPathRequestsInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDormancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPawnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrafeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSlowdownAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSlowdownAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStrafeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlignDirectionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FleeSpeedBoostMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBrakingDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentPathFraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Destination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* DestinationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AcceptanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool OnlyPartPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PauseMovementTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EDeepMovementMode MoveMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UPawnStatsComponent* PawnStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastForwardDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float VerticalAngleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HorizontalAngleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsStrafing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool HasOustandingPathRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool LastPathReachedPreciseDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DampOmega;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseMovementSpring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SnapToPathfinderOnFirstMove;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFakeMoverState FakePhysicsMove;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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

