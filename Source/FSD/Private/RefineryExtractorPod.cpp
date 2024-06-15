#include "RefineryExtractorPod.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/WidgetComponent.h"
#include "Net/UnrealNetwork.h"

ARefineryExtractorPod::ARefineryExtractorPod(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProgressWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("ProgressWidget"));
    this->SkeletalMesh_Base = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh_Base"));
    this->ScreenSocketName = TEXT("ScreenSocket");
    this->ExtractorState = ERefineryExtractorPodState::Landing;
    this->ProgressWidget->SetupAttachment(SkeletalMesh_Base);
    this->SkeletalMesh_Base->SetupAttachment(RootComponent);
}


void ARefineryExtractorPod::StartExtraction() {
}

void ARefineryExtractorPod::SetIsReturning(const bool InIsReturning) {
}

void ARefineryExtractorPod::SetIsPumping(const bool InIsPumping) {
}

void ARefineryExtractorPod::SetIsOpen(const bool InIsOpen) {
}

void ARefineryExtractorPod::OnRep_ExtractorState() {
}



void ARefineryExtractorPod::ChangeExtractorState(ERefineryExtractorPodState NewState) {
}

void ARefineryExtractorPod::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARefineryExtractorPod, ExtractorState);
}


