#pragma once
#include "CoreMinimal.h"
#include "DeepPathFinderPreference.h"
#include "DeepPathFinderType.h"
#include "DeepPathFinderSize.h"
#include "GameFramework/PawnMovementComponent.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AsyncPathRequestsInterface.h"
#include "EDeepMovementState.h"
#include "HandleRotationOptions.h"
#include "DeepRepPath.h"
#include "EDeepMovementMode.h"
#include "FakeMoverState.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LatentActionManager.h"
#include "EOffsetFrom.h"
#include "UObject/NoExportTypes.h"
#include "DeepPathfinderMovement.generated.h"

class ADeepCSGWorld;
class UFakeMoverSettings;
class AActor;
class UPawnStatsComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDeepPathfinderMovementOnPathBegin);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDeepPathfinderMovementOnPauseMovementElapsed);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDeepPathfinderMovementOnPathFinished, bool, success);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDeepPathfinderMovementOnRefreshDestination);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDeepPathfinderMovementOnStateChanged, EDeepMovementState, State);

UCLASS()
class UDeepPathfinderMovement : public UPawnMovementComponent, public IAsyncPathRequestsInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
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
    
    UPROPERTY(EditAnywhere)
    DeepPathFinderType PathfinderType;
    
    UPROPERTY(EditAnywhere)
    DeepPathFinderSize PathfinderSize;
    
    UPROPERTY(EditAnywhere)
    ETeleportType MovementPhysicsType;
    
    UPROPERTY(EditAnywhere)
    DeepPathFinderPreference PathfinderPreference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AlignTowardsTargetIfStationary;
    
    UPROPERTY(EditAnywhere)
    float AlignToTargetMinRequiredAngle;
    
    UPROPERTY(EditAnywhere)
    bool AllowSlowTickRateWhenNotVisible;
    
    UPROPERTY(EditAnywhere)
    bool ForceAPathIfNoneFound;
    
    UPROPERTY(EditInstanceOnly, Transient)
    bool DrawServerPath;
    
    UPROPERTY(BlueprintAssignable)
    FDeepPathfinderMovementOnPathBegin OnPathBegin;
    
    UPROPERTY(BlueprintAssignable)
    FDeepPathfinderMovementOnPauseMovementElapsed OnPauseMovementElapsed;
    
    UPROPERTY(BlueprintAssignable)
    FDeepPathfinderMovementOnPathFinished OnPathFinished;
    
    UPROPERTY(BlueprintAssignable)
    FDeepPathfinderMovementOnRefreshDestination OnRefreshDestination;
    
    UPROPERTY(BlueprintAssignable)
    FDeepPathfinderMovementOnStateChanged OnStateChanged;
    
private:
    UPROPERTY(Transient)
    ADeepCSGWorld* CSGWorld;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PathMovedDist)
    uint32 PathMovedDist;
    
    UPROPERTY(Transient)
    uint32 LocalPathMovedDist;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Path)
    FDeepRepPath Path;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_MoveSettings)
    UFakeMoverSettings* MoveSettings;
    
    UPROPERTY(Replicated, Transient)
    AActor* TargetActor;
    
    UPROPERTY(Transient)
    int32 CurrentPathIndex;
    
    UPROPERTY(Transient)
    float CurrentPathFraction;
    
    UPROPERTY(Transient)
    FVector Destination;
    
    UPROPERTY(Transient)
    AActor* DestinationActor;
    
    UPROPERTY(Transient)
    float AcceptanceRadius;
    
    UPROPERTY(Transient)
    bool OnlyPartPath;
    
    UPROPERTY(Transient)
    float PauseMovementTime;
    
    UPROPERTY(Replicated, Transient)
    EDeepMovementMode MoveMode;
    
    UPROPERTY(Export, Transient)
    UPawnStatsComponent* PawnStats;
    
    UPROPERTY(Transient)
    FVector LastForwardDir;
    
    UPROPERTY(Transient)
    float VerticalAngleSpeed;
    
    UPROPERTY(Transient)
    float HorizontalAngleSpeed;
    
    UPROPERTY(Transient)
    bool IsStrafing;
    
    UPROPERTY(Transient)
    bool HasOustandingPathRequest;
    
    UPROPERTY(Transient)
    bool LastPathReachedPreciseDestination;
    
    UPROPERTY(Transient)
    float PostponedTickTime;
    
    UPROPERTY(Transient)
    bool LastMoveSuccessful;
    
    UPROPERTY(EditAnywhere)
    bool HandleRotation;
    
    UPROPERTY(EditAnywhere)
    bool TickAfterOwnerDeath;
    
    UPROPERTY(EditAnywhere)
    FHandleRotationOptions HandleRotationOptions;
    
    UPROPERTY(Transient)
    FVector UnfilteredPosition;
    
    UPROPERTY(Transient)
    FVector LastDestPosUsed;
    
    UPROPERTY(EditAnywhere)
    float DampOmega;
    
    UPROPERTY(EditAnywhere)
    bool UseMovementSpring;
    
    UPROPERTY(EditAnywhere)
    bool SnapToPathfinderOnFirstMove;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFakeMoverState FakePhysicsMove;
    
private:
    UPROPERTY(Transient)
    float FakeSyncTime;
    
public:
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
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UDeepPathfinderMovement();
    
    // Fix for true pure virtual functions not being implemented
};

