#include "PipelineSegment.h"
#include "Net/UnrealNetwork.h"
#include "Components/SplineMeshComponent.h"
#include "Components/SplineComponent.h"
#include "SingleUsableComponent.h"
#include "DroneUseComponent.h"
#include "SimpleHealthComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "PathfinderSplineSegmentCollisionComponent.h"

class UHealthComponentBase;
class APlayerCharacter;
class APipelineSegment;
class UMaterialInterface;
class APipelineStart;
class UTrackBuilderUsable;
class ATrackBuilderSegment;

void APipelineSegment::UpdateSplineMesh(USplineMeshComponent* InMesh, float InProgress, bool InMoveEndCap) {
}

void APipelineSegment::SetSegmentBroken(APlayerCharacter* InUser, bool InSegmentBroken) {
}

void APipelineSegment::SetPipelineNumberMaterial(UMaterialInterface* InNumberMaterial) {
}

void APipelineSegment::SetEndPostVisible(bool InVisible) {
}







void APipelineSegment::OnRep_SegmentBroken() {
}

void APipelineSegment::OnRep_SegmentActivatedProgress() {
}

APipelineStart* APipelineSegment::GetPipelineStart() const {
    return NULL;
}

APipelineSegment* APipelineSegment::GetNextPipelineSegment(bool bForward) const {
    return NULL;
}

bool APipelineSegment::GetIsSegmentActivated() const {
    return false;
}

void APipelineSegment::CallbackSegmentRepaired(APlayerCharacter* InUser, EInputKeys Key) {
}

void APipelineSegment::CallbackSegmentDestroyed(UHealthComponentBase* InHealth) {
}

void APipelineSegment::CallbackSegmentActivatedProgress(float InProgress) {
}

void APipelineSegment::CallbackSegmentActivated(APlayerCharacter* InUser, EInputKeys Key) {
}

void APipelineSegment::CallbackPipelineStateChanged(APipelineStart* InPipelineStart, EPipelineBuildState InState) {
}

void APipelineSegment::CallbackNextSegmentChanged(UTrackBuilderUsable* InUsable, ATrackBuilderSegment* InSegment) {
}

void APipelineSegment::CallbackDroneUsed(int32 TimesUsed) {
}

void APipelineSegment::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APipelineSegment, bSegmentBroken);
    DOREPLIFETIME(APipelineSegment, SegmentActivatedProgress);
}

APipelineSegment::APipelineSegment() {
    this->StaticMeshUnassembled = NULL;
    this->StaticMeshAssembled = NULL;
    this->StaticMeshFinal = NULL;
    this->CarvingTraceType = TraceTypeQuery1;
    this->NumberMaterial = NULL;
    this->RepairSegmentUsable = CreateDefaultSubobject<USingleUsableComponent>(TEXT("RepairSegmentUsable"));
    this->ActivateSegmentUsable = CreateDefaultSubobject<USingleUsableComponent>(TEXT("ActivateSegmentUsable"));
    this->DroneUsable = CreateDefaultSubobject<UDroneUseComponent>(TEXT("DroneUseComponent"));
    this->SegmentHealthComponent = CreateDefaultSubobject<USimpleHealthComponent>(TEXT("SegmentHealthComponent"));
    this->MovementSpline = CreateDefaultSubobject<USplineComponent>(TEXT("MovementSpline"));
    this->MovementSplineRight = CreateDefaultSubobject<USplineComponent>(TEXT("MovementSplineRight"));
    this->MovementSplineLeft = CreateDefaultSubobject<USplineComponent>(TEXT("MovementSplineLeft"));
    this->PipelineMesh = CreateDefaultSubobject<USplineMeshComponent>(TEXT("PipelineMesh"));
    this->PipelineOuterMesh = CreateDefaultSubobject<USplineMeshComponent>(TEXT("PipelineOuterMesh"));
    this->PipelineCapMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PipelineCapMesh"));
    this->EndPostMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("EndPostMesh"));
    this->EndPostMeshStatic = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EndPostMeshStatic"));
    this->PathfinderComponent = CreateDefaultSubobject<UPathfinderSplineSegmentCollisionComponent>(TEXT("PathfinderComponent"));
    this->bSegmentBroken = false;
    this->SegmentActivatedProgress = 0.00f;
    this->PipelineState = EPipelineBuildState::BeginBuilt;
    this->MinValidLength = 100.00f;
    this->MaxValidLength = 900.00f;
    this->TooSharpExtraLength = 100.00f;
    this->TooSteepExtraLength = 400.00f;
    this->BlockedSphereSize = 10.00f;
    this->BlockedExtraRaytraceRotationOffset = 45;
    this->BlockedExtraRaytraces = 4.00f;
    this->BlockedExtraRaytraceDist = 30.00f;
    this->BlockedRayTraceSuccesses = 2.00f;
}

