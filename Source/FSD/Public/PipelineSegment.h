#pragma once
#include "CoreMinimal.h"
#include "TrackBuilderSegment.h"
#include "EPipelineBuildState.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EInputKeys.h"
#include "PipelineSegment.generated.h"

class UMaterialInterface;
class USimpleHealthComponent;
class APipelineSegment;
class USingleUsableComponent;
class UStaticMesh;
class UDroneUseComponent;
class USplineComponent;
class UTrackBuilderUsable;
class UPathfinderSplineSegmentCollisionComponent;
class USplineMeshComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;
class APipelineStart;
class APlayerCharacter;
class UHealthComponentBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPipelineSegmentOnPipelineBroken, APipelineSegment*, InPipelineSegment);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPipelineSegmentOnPipelineRepaired, APipelineSegment*, InPipelineSegment);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPipelineSegmentOnPipelineStateChanged, EPipelineBuildState, InPipelineState);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPipelineSegmentOnPipelineActivated, APipelineSegment*, InPipelineSegment);

UCLASS(Abstract)
class APipelineSegment : public ATrackBuilderSegment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPipelineSegmentOnPipelineBroken OnPipelineBroken;
    
    UPROPERTY(BlueprintAssignable)
    FPipelineSegmentOnPipelineRepaired OnPipelineRepaired;
    
    UPROPERTY(BlueprintAssignable)
    FPipelineSegmentOnPipelineActivated OnPipelineActivated;
    
    UPROPERTY(BlueprintAssignable)
    FPipelineSegmentOnPipelineStateChanged OnPipelineStateChanged;
    
protected:
    UPROPERTY(EditAnywhere)
    UStaticMesh* StaticMeshUnassembled;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* StaticMeshAssembled;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* StaticMeshFinal;
    
    UPROPERTY(EditAnywhere)
    FVector EditorEndLocation;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> CarvingTraceType;
    
    UPROPERTY(Transient)
    UMaterialInterface* NumberMaterial;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USingleUsableComponent* RepairSegmentUsable;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USingleUsableComponent* ActivateSegmentUsable;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDroneUseComponent* DroneUsable;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USimpleHealthComponent* SegmentHealthComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USplineComponent* MovementSpline;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USplineComponent* MovementSplineRight;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USplineComponent* MovementSplineLeft;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USplineMeshComponent* PipelineMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USplineMeshComponent* PipelineOuterMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* PipelineCapMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* EndPostMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* EndPostMeshStatic;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPathfinderSplineSegmentCollisionComponent* PathfinderComponent;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_SegmentBroken)
    bool bSegmentBroken;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_SegmentActivatedProgress)
    float SegmentActivatedProgress;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EPipelineBuildState PipelineState;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<APipelineStart> PipelineStart;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinValidLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxValidLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TooSharpExtraLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TooSteepExtraLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlockedSphereSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 BlockedExtraRaytraceRotationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlockedExtraRaytraces;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlockedExtraRaytraceDist;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlockedRayTraceSuccesses;
    
    UFUNCTION(BlueprintCallable)
    void UpdateSplineMesh(USplineMeshComponent* InMesh, float InProgress, bool InMoveEndCap);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetSegmentBroken(APlayerCharacter* InUser, bool InSegmentBroken);
    
    UFUNCTION(BlueprintCallable)
    void SetPipelineNumberMaterial(UMaterialInterface* InNumberMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetEndPostVisible(bool InVisible);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSegmentBrokenChanged(bool InSegmentBroken);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSegmentActivatedProgress(float InProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSegmentActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePlacementFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePlacementBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRepaired(APlayerCharacter* InUser);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SegmentBroken();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SegmentActivatedProgress();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APipelineStart* GetPipelineStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APipelineSegment* GetNextPipelineSegment(bool bForward) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSegmentActivated() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CallbackSegmentRepaired(APlayerCharacter* InUser, EInputKeys Key);
    
    UFUNCTION(BlueprintCallable)
    void CallbackSegmentDestroyed(UHealthComponentBase* InHealth);
    
    UFUNCTION(BlueprintCallable)
    void CallbackSegmentActivatedProgress(float InProgress);
    
    UFUNCTION(BlueprintCallable)
    void CallbackSegmentActivated(APlayerCharacter* InUser, EInputKeys Key);
    
    UFUNCTION(BlueprintCallable)
    void CallbackPipelineStateChanged(APipelineStart* InPipelineStart, EPipelineBuildState InState);
    
    UFUNCTION(BlueprintCallable)
    void CallbackNextSegmentChanged(UTrackBuilderUsable* InUsable, ATrackBuilderSegment* InSegment);
    
    UFUNCTION(BlueprintCallable)
    void CallbackDroneUsed(int32 TimesUsed);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    APipelineSegment();
};

