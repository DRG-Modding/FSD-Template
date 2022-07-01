#include "Objective.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class UResourceData;
class UObjectiveWidget;
class UObjective;
class UOptionalObjectiveWidget;
class UTexture2D;

void UObjective::SignalObjectiveUpdated() {
}


void UObjective::OnRep_IsPrimaryObjective() {
}

bool UObjective::IsTutorialObjective_Implementation() const {
    return false;
}

bool UObjective::IsPrimary() const {
    return false;
}

bool UObjective::IsObjectiveResource_Implementation(UResourceData* InResource) const {
    return false;
}

bool UObjective::IsFinalBattle() const {
    return false;
}

bool UObjective::IsCompleted() const {
    return false;
}

bool UObjective::HasReplicated() const {
    return false;
}

void UObjective::HandleMissionEnded_Implementation(bool MissionSuccess) const {
}

TSubclassOf<UObjectiveWidget> UObjective::GetWidgetClassOrDefault(TSubclassOf<UObjectiveWidget> DefaultWidgetClass) {
    return NULL;
}

int32 UObjective::GetRewardXP() const {
    return 0;
}

FCreditsReward UObjective::GetRewardCredits() const {
    return FCreditsReward{};
}

TSubclassOf<UOptionalObjectiveWidget> UObjective::GetOptionalMissionWidget_Implementation() const {
    return NULL;
}

FText UObjective::GetObjectiveText() const {
    return FText::GetEmpty();
}

UTexture2D* UObjective::GetObjectiveIconFromClass(TSubclassOf<UObjective> objectiveClass) {
    return NULL;
}


FText UObjective::GetObjectiveDescriptionFromClass(TSubclassOf<UObjective> objectiveClass, float missionLength) {
    return FText::GetEmpty();
}


int32 UObjective::GetObjectiveAmountFromClass(TSubclassOf<UObjective> objectiveClass, float missionLength) {
    return 0;
}



FText UObjective::GetInMissionText_Implementation() const {
    return FText::GetEmpty();
}

FText UObjective::GetInMissionCounterText_Implementation() const {
    return FText::GetEmpty();
}

UTexture2D* UObjective::GetInMissionCounterIcon_Implementation() const {
    return NULL;
}

void UObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UObjective, IsPrimaryObjective);
}

UObjective::UObjective() {
    this->ObjectiveWidgetClass = NULL;
    this->CompletionRewardInCredits = 0;
    this->CompletionRewardInXP = 0;
    this->ScaleObjectiveToMission = true;
    this->RequiredReturnObjectiveCompleted = false;
    this->ObjectiveCompletedStat = NULL;
    this->IsPrimaryObjective = -1;
    this->MissionScale = 1.00f;
}

