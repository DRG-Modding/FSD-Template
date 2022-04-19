#include "SingleUsableComponent.h"
#include "Net/UnrealNetwork.h"

class APlayerCharacter;

void USingleUsableComponent::Use(APlayerCharacter* User, EInputKeys Key, float DeltaTime) {
}

void USingleUsableComponent::SetProgress(float Value) {
}

void USingleUsableComponent::SetCanUse(bool CanUse) {
}

void USingleUsableComponent::OnRep_UserCount() {
}

void USingleUsableComponent::OnRep_Usable() {
}

void USingleUsableComponent::OnRep_DesiredProgress() {
}

void USingleUsableComponent::Cheat_Use(APlayerCharacter* User, EInputKeys Key) {
}

void USingleUsableComponent::All_PlayFailedAudio_Implementation() {
}

void USingleUsableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USingleUsableComponent, Usable);
    DOREPLIFETIME(USingleUsableComponent, DesiredProgress);
    DOREPLIFETIME(USingleUsableComponent, userCount);
}

USingleUsableComponent::USingleUsableComponent() {
    this->AudioBeginUse = NULL;
    this->AudioFailedUse = NULL;
    this->AudioCompletedUse = NULL;
    this->BoscoLaserpointerShout = NULL;
    this->CoopUse = true;
    this->UseSpeedStat = NULL;
    this->CoopUseMultiplier = 1.00f;
    this->Usable = false;
    this->TurnOffAfterUse = false;
    this->MultipleUse = false;
    this->bShowUsingUI = true;
    this->useDuration = 0.00f;
    this->Progress = 0.00f;
    this->DesiredProgress = 0.00f;
    this->userCount = 0;
    this->AudioBeginUseInstance = NULL;
}

