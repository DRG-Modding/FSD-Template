#include "PipelineStart.h"
#include "Net/UnrealNetwork.h"
#include "TrackBuilderUsable.h"

APipelineStart::APipelineStart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->PipelineID = 0;
    this->PipelineStartUsable = CreateDefaultSubobject<UTrackBuilderUsable>(TEXT("PipelineStartUsable"));
    this->BuildState = EPipelineBuildState::NotStarted;
    this->PipelineFinish = NULL;
    this->Refinery = NULL;
}


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


