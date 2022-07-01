#include "PipelineFinish.h"
#include "Net/UnrealNetwork.h"
#include "SingleUsableComponent.h"
#include "TrackBuilderConnectPoint.h"

class ARessuplyPod;
class ATrackBuilderSegment;
class APlayerCharacter;
class APipelineSegment;



void APipelineFinish::OnRep_PipelineCompleted() {
}

void APipelineFinish::OnRep_ExtractorPod() {
}

void APipelineFinish::OnExtractorPodStateChanged(ARessuplyPod* InExtractorPod, ERessuplyPodState InState) {
}

void APipelineFinish::OnExtractorPodOrdered(APlayerCharacter* InUser, EInputKeys Key) {
}

void APipelineFinish::OnConnectedWithSegment(UTrackBuilderConnectPoint* InConnectPoint, ATrackBuilderSegment* InSegment) {
}

void APipelineFinish::OnConnectedSegmentActivated(APipelineSegment* InSegment) {
}


void APipelineFinish::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APipelineFinish, ExtractorPod);
    DOREPLIFETIME(APipelineFinish, bPipelineCompleted);
}

APipelineFinish::APipelineFinish() {
    this->PipelineEndConnection = CreateDefaultSubobject<UTrackBuilderConnectPoint>(TEXT("TrackEndConnection"));
    this->UsableOrderExtractor = CreateDefaultSubobject<USingleUsableComponent>(TEXT("UsableOrderExtractor"));
    this->ExtractPodClass = NULL;
    this->ExtractorPod = NULL;
    this->bPipelineCompleted = false;
}

