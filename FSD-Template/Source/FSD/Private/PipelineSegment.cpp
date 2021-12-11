#include "PipelineSegment.h"
#include "Net/UnrealNetwork.h"

class APlayerCharacter;
class UTrackBuilderUsable;
class USplineMeshComponent;
class ATrackBuilderSegment;
class UMaterialInterface;
class APipelineStart;
class APipelineSegment;
class UHealthComponentBase;

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

