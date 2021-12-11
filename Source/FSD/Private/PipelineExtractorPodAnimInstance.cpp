#include "PipelineExtractorPodAnimInstance.h"

UPipelineExtractorPodAnimInstance::UPipelineExtractorPodAnimInstance() {
    this->ConnectionRotation = 0.00f;
    this->AnimState = EPipelineExtractorPodAnimState::Folded;
    this->PodState = ERessuplyPodState::ReadyToDrop;
    this->PipelineState = EPipelineBuildState::BeginBuilt;
    this->RefineryState = ERefineryState::ConnectingPipes;
    this->RotationSpeed = 5.00f;
}

