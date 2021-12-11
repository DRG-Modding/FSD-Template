#include "PipelineExtractorPod.h"
#include "Net/UnrealNetwork.h"

class APipelineSegment;

void APipelineExtractorPod::SetTargetRotation_Implementation(APipelineSegment* InPipelineSegment) {
}
bool APipelineExtractorPod::SetTargetRotation_Validate(APipelineSegment* InPipelineSegment) {
    return true;
}


void APipelineExtractorPod::OnRep_ConnectedSegment() {
}


void APipelineExtractorPod::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APipelineExtractorPod, ConnectedSegment);
    DOREPLIFETIME(APipelineExtractorPod, TargetRotation);
}

APipelineExtractorPod::APipelineExtractorPod() {
    this->TargetRotation = 0.00f;
}

