#include "PipelineStart.h"
#include "Net/UnrealNetwork.h"
#include "TrackBuilderUsable.h"

class APipelineFinish;
class APipelineSegment;
class ATrackBuilderSegment;


void APipelineStart::PipelineCompleted(APipelineFinish* InPipelineFinish) {
}

void APipelineStart::OnRep_BuildState() {
}

void APipelineStart::OnNextSegmentChanged(UTrackBuilderUsable* InUsable, ATrackBuilderSegment* InSegment) {
}

TArray<APipelineSegment*> APipelineStart::GetAllPipelineSegments() const {
    return TArray<APipelineSegment*>();
}

void APipelineStart::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APipelineStart, BuildState);
    DOREPLIFETIME(APipelineStart, PipelineFinish);
}

APipelineStart::APipelineStart() {
    this->PipelineID = 0;
    this->PipelineStartUsable = CreateDefaultSubobject<UTrackBuilderUsable>(TEXT("PipelineStartUsable"));
    this->BuildState = EPipelineBuildState::NotStarted;
    this->PipelineFinish = NULL;
    this->Refinery = NULL;
}

