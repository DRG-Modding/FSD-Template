#include "ExpeniteSamplePod.h"
#include "Net/UnrealNetwork.h"

AExpeniteSamplePod::AExpeniteSamplePod(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ServerReturnProgress = 0.00f;
    this->ReturnDelay = 0.00f;
    this->ReturnCurve = NULL;
    this->TargetReturnTime = 0.00f;
}

void AExpeniteSamplePod::LaunchBackToSpace() {
}

void AExpeniteSamplePod::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AExpeniteSamplePod, ServerReturnProgress);
}


