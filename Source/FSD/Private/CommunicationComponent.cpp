#include "CommunicationComponent.h"
#include "Templates/SubclassOf.h"

class UDialogDataAsset;
class UAudioComponent;
class UObject;
class USoundBase;
class APlayerCharacter;

void UCommunicationComponent::ShoutCustomOrDefault(UDialogDataAsset* CustomShout, EShoutType DefaultShout) {
}

void UCommunicationComponent::ShoutCustomLocalOnly(UDialogDataAsset* NewShout) {
}

void UCommunicationComponent::ShoutCustomClosestDwarf(UObject* WorldContext, UDialogDataAsset* NewShout, FVector TargetLocation) {
}

void UCommunicationComponent::ShoutCustom(UDialogDataAsset* NewShout) {
}

void UCommunicationComponent::Shout(EShoutType NewShout) {
}

void UCommunicationComponent::SetMissionControlPaused(bool IsPaused) {
}

void UCommunicationComponent::ServerShout_Implementation(UDialogDataAsset* NewShout) {
}

void UCommunicationComponent::ServerMissionShout_Implementation(UDialogDataAsset* NewShout, int32 Index, bool bPriority) {
}

UAudioComponent* UCommunicationComponent::PlayPitchedByClass(UObject* WorldContextObject, TSubclassOf<APlayerCharacter> CharacterClass, USoundBase* Sound, UDialogDataAsset* NewShout, EShoutType ShoutType, UAudioComponent* AudioComponent) {
    return NULL;
}

void UCommunicationComponent::PlayPitchedAsync(UDialogDataAsset* NewShout, EShoutType ShoutType, bool IgnoreCoolDown, UAudioComponent* AudioComponent, UObject* WorldContextObject, float shoutVolumeMultiplier) {
}

UAudioComponent* UCommunicationComponent::PlayPitched(USoundBase* Sound, UDialogDataAsset* NewShout, EShoutType ShoutType, bool IgnoreCoolDown, UAudioComponent* AudioComponent, UObject* WorldContextObject) {
    return NULL;
}

int32 UCommunicationComponent::MissionShoutLocally(UObject* WorldContext, UDialogDataAsset* NewShout) {
    return 0;
}

void UCommunicationComponent::MissionShout(UObject* WorldContext, UDialogDataAsset* NewShout, bool bPriority) {
}

bool UCommunicationComponent::IsMissionControlSpeaking() const {
    return false;
}

void UCommunicationComponent::ClientShout_Implementation(APlayerCharacter* Sender, UDialogDataAsset* NewShout, int32 Index) {
}

void UCommunicationComponent::ClientMissionShout_Implementation(UDialogDataAsset* NewShout, int32 Index, bool bPriority) {
}

UCommunicationComponent::UCommunicationComponent() {
    this->ShoutingEnabled = true;
    this->ShoutWidgetType = NULL;
    this->CharacterShouts = NULL;
    this->PitchMultiplier = 1.00f;
    this->MinShoutDelay = 1.00f;
    this->CloseRangeShoutDistance = 1500.00f;
    this->bMissionControlPaused = false;
    this->MissionControlAudioComponent = NULL;
    this->Character = NULL;
    this->LastShout = NULL;
}

