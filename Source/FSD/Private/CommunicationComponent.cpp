#include "CommunicationComponent.h"
#include "Templates/SubclassOf.h"

class APlayerCharacter;
class UDialogDataAsset;
class UObject;
class UAudioComponent;
class USoundBase;

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
bool UCommunicationComponent::ServerShout_Validate(UDialogDataAsset* NewShout) {
    return true;
}

void UCommunicationComponent::ServerMixerAnnouncement_Implementation(const FMixerAnnouncement& Announcement) {
}
bool UCommunicationComponent::ServerMixerAnnouncement_Validate(const FMixerAnnouncement& Announcement) {
    return true;
}

void UCommunicationComponent::ServerMissionShout_Implementation(UDialogDataAsset* NewShout, int32 Index, bool bPriority) {
}
bool UCommunicationComponent::ServerMissionShout_Validate(UDialogDataAsset* NewShout, int32 Index, bool bPriority) {
    return true;
}

UAudioComponent* UCommunicationComponent::PlayPitchedByClass(UObject* WorldContextObject, TSubclassOf<APlayerCharacter> CharacterClass, USoundBase* Sound, UDialogDataAsset* NewShout, EShoutType ShoutType, UAudioComponent* AudioComponent) {
    return NULL;
}

void UCommunicationComponent::PlayPitchedAsync(UDialogDataAsset* NewShout, EShoutType ShoutType, bool IgnoreCoolDown, UAudioComponent* AudioComponent, UObject* WorldContextObject, float shoutVolumeMultiplier) {
}

UAudioComponent* UCommunicationComponent::PlayPitched(USoundBase* Sound, UDialogDataAsset* NewShout, EShoutType ShoutType, bool IgnoreCoolDown, UAudioComponent* AudioComponent, UObject* WorldContextObject) {
    return NULL;
}

void UCommunicationComponent::MixerAnnouncementLocalOnly(UObject* WorldContext, const FMixerAnnouncement& Announcement) {
}

void UCommunicationComponent::MixerAnnouncement(UObject* WorldContext, const FMixerAnnouncement& Announcement) {
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
bool UCommunicationComponent::ClientShout_Validate(APlayerCharacter* Sender, UDialogDataAsset* NewShout, int32 Index) {
    return true;
}

void UCommunicationComponent::ClientMixerAnnouncement_Implementation(const FMixerAnnouncement& Announcement) {
}
bool UCommunicationComponent::ClientMixerAnnouncement_Validate(const FMixerAnnouncement& Announcement) {
    return true;
}

void UCommunicationComponent::ClientMissionShout_Implementation(UDialogDataAsset* NewShout, int32 Index, bool bPriority) {
}
bool UCommunicationComponent::ClientMissionShout_Validate(UDialogDataAsset* NewShout, int32 Index, bool bPriority) {
    return true;
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
    this->ShoutAudioComponent = NULL;
}

