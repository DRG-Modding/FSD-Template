#include "FSDRefinery.h"
#include "Net/UnrealNetwork.h"
#include "SingleUsableComponent.h"

class APlayerCharacter;
class APipelineStart;

void AFSDRefinery::SetRefineryState(ERefineryState InState) {
}




void AFSDRefinery::OnStartRefiningPressed(APlayerCharacter* InCharacter, EInputKeys Key) {
}

void AFSDRefinery::OnRep_RefineryState(ERefineryState InOldState) {
}

void AFSDRefinery::OnPlayerCharacterRegistered(APlayerCharacter* InCharacter) {
}

void AFSDRefinery::OnPipelineStateChanged(APipelineStart* InPipelineStart, EPipelineBuildState InPipelineState) {
}

void AFSDRefinery::OnObjectivesChanged() {
}

void AFSDRefinery::OnLaunchRocketPressed(APlayerCharacter* InCharacter, EInputKeys Key) {
}

float AFSDRefinery::GetRefiningProgress() const {
    return 0.0f;
}

void AFSDRefinery::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFSDRefinery, RefineryState);
    DOREPLIFETIME(AFSDRefinery, RefiningProgressReplicated);
}

AFSDRefinery::AFSDRefinery() {
    this->UsableStartRefining = CreateDefaultSubobject<USingleUsableComponent>(TEXT("UsableStartRefining"));
    this->UsableLaunchRocket = CreateDefaultSubobject<USingleUsableComponent>(TEXT("UsableLaunchRocket"));
    this->LaunchRocketButtonPressedShout = NULL;
    this->BuilderItem = NULL;
    this->RefiningTotalDuration = 120.00f;
    this->PipelineBreakTimePenaltyPerAdditionalPlayers = 5.00f;
    this->SegmentBreakDownPenaltyPerAdditionalPlayers = 1;
    this->RefineryState = ERefineryState::Landing;
    this->PreviousRefineryState = ERefineryState::Landing;
    this->RefiningProgressReplicated = 0;
}

