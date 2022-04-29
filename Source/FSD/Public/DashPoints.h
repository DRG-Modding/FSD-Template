#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DashSigDelegate.h"
#include "Curves/CurveFloat.h"
#include "Engine/NetSerialization.h"
#include "EDashPointsGenerationMode.h"
#include "UObject/NoExportTypes.h"
#include "DashPoints.generated.h"

class UHealthComponentBase;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDashPoints : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDashSig OnStartDashEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDashSig OnStopDashEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize DashLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve DashSpeedCurve;
    
    UPROPERTY(EditAnywhere)
    float PointOffset;
    
    UPROPERTY(EditAnywhere)
    float MaxRangeFromPlayer;
    
    UPROPERTY(EditAnywhere)
    float MinRangeFromPlayer;
    
    UPROPERTY(EditAnywhere)
    float MinHeightAboveTarget;
    
    UPROPERTY(EditAnywhere)
    float MaxHeightAboveTarget;
    
    UPROPERTY(EditAnywhere)
    float safeReduction;
    
    UPROPERTY(EditAnywhere)
    float AcceptedDashradius;
    
    UPROPERTY(EditAnywhere)
    float DashSpeed;
    
    UPROPERTY(EditAnywhere)
    float SlowdownRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IgnoreTheClosestPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDashPointsGenerationMode GenerationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Dashing, meta=(AllowPrivateAccess=true))
    bool IsDashing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreRules;
    
public:
    UDashPoints();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateDashPointData();
    
    UFUNCTION(BlueprintCallable)
    void StopDashing();
    
    UFUNCTION(BlueprintCallable)
    void StartDashing();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Dashing();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnParentDeath(UHealthComponentBase* Health);
    
public:
    UFUNCTION(BlueprintCallable)
    FVector GetDashPoint(AActor* fromTarget, bool& success);
    
};

