#include "PipelineExtractorPod.h"
#include "Net/UnrealNetwork.h"

APipelineExtractorPod::APipelineExtractorPod(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetRotation = 0.00f;
}

void APipelineExtractorPod::SetTargetRotation_Implementation(APipelineSegment* InPipelineSegment) {
}


void APipelineExtractorPod::OnRep_ConnectedSegment() {
}


void APipelineExtractorPod::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APipelineExtractorPod, ConnectedSegment);
    DOREPLIFETIME(APipelineExtractorPod, TargetRotation);
}


