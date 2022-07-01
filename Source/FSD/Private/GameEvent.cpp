#include "GameEvent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "Components/ChildActorComponent.h"

class ARessuplyPod;
class UDebrisPositioning;
class AActor;
class AProceduralSetup;
class AEventStarterButton;

void AGameEvent::TrySetupGameEvent() {
}

void AGameEvent::TriggerEvent() {
}

void AGameEvent::StartShout() {
}

void AGameEvent::StageObjectiveCompleted() {
}

ARessuplyPod* AGameEvent::SpawnEventPod(TSubclassOf<ARessuplyPod> podClass, const FVector& aSpawnLocation, int32 Delay) {
    return NULL;
}

AActor* AGameEvent::SpawnEventActor(TSubclassOf<AActor> eventActorClass, const FTransform& aSpawnLocation) {
    return NULL;
}

void AGameEvent::SetStageProgress(float Progress) {
}

void AGameEvent::SetProgressBarPct(float InPct) {
}

void AGameEvent::SetObjectivesPerStage(int32 NewObjectivesPerStage) {
}

void AGameEvent::RemoveParticipant(AActor* participant) {
}

void AGameEvent::OnStarterObjectUsed(AEventStarterButton* eventStarter) {
}



void AGameEvent::OnRep_StageProgress() {
}

void AGameEvent::OnRep_ObjectivesPerStage() {
}

void AGameEvent::OnRep_IsEventStartersActive() {
}

void AGameEvent::OnRep_FailedEvent() {
}

void AGameEvent::OnRep_EventStarted() {
}

void AGameEvent::OnRep_EventParticipants() {
}




bool AGameEvent::IsEventCompleted() const {
    return false;
}

bool AGameEvent::IsEventActive() const {
    return false;
}

float AGameEvent::GetStageProgress() const {
    return 0.0f;
}

bool AGameEvent::GetShowTimeOnHUD() const {
    return false;
}

bool AGameEvent::GetShowScoreOnHUD() const {
    return false;
}

bool AGameEvent::GetShowProgressBar() const {
    return false;
}

FText AGameEvent::GetObjectiveText() const {
    return FText::GetEmpty();
}

int32 AGameEvent::GetObjectivesPerStage() const {
    return 0;
}

FText AGameEvent::GetEventName() const {
    return FText::GetEmpty();
}

bool AGameEvent::GetEventFailed() const {
    return false;
}

float AGameEvent::GetDelayUITime() const {
    return 0.0f;
}

void AGameEvent::EndShout() {
}

FTransform AGameEvent::DebreePositionPoint(AProceduralSetup* setup, const FVector& fromLocation, float MinDistance, float desiredDistance, UDebrisPositioning* DebrisPositioning, TSubclassOf<AActor> terrainPlacement, float maxPathLength) {
    return FTransform{};
}

void AGameEvent::BootUpEvent() {
}

void AGameEvent::AddStageProgress(float progressToAdd) {
}

void AGameEvent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGameEvent, StageProgress);
    DOREPLIFETIME(AGameEvent, objectivesPerStage);
    DOREPLIFETIME(AGameEvent, EventStartersActive);
    DOREPLIFETIME(AGameEvent, EventStarted);
    DOREPLIFETIME(AGameEvent, FailedEvent);
    DOREPLIFETIME(AGameEvent, EventParticipants);
}

AGameEvent::AGameEvent() {
    this->bGameEventSetup = false;
    this->StartEventObject = CreateDefaultSubobject<UChildActorComponent>(TEXT("StartEventObject"));
    this->EventTriggeredShout = NULL;
    this->EventFinishedShout = NULL;
    this->EventFailedShout = NULL;
    this->EventTriggeredShoutDelay = 0.00f;
    this->EventFinishedShoutDelay = 0.00f;
    this->StageProgress = 0.00f;
    this->TimeLimit = -1.00f;
    this->DelayUITime = 0.00f;
    this->objectivesPerStage = 10;
    this->EventStartersActive = false;
    this->StopScriptedWavesWhileActive = false;
    this->StopNormalWavesWhileActive = false;
    this->EventStarted = false;
    this->FailedEvent = false;
    this->ShowRemainingTimeOnHUD = false;
    this->ShowScoreStatusOnHUD = false;
    this->ShowProgressBar = false;
    this->ProgressBarPct = 0.00f;
    this->SkipEventStarters = false;
}

