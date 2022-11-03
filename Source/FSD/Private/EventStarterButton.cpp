#include "EventStarterButton.h"
#include "Net/UnrealNetwork.h"
#include "SingleUsableComponent.h"
#include "Components/SceneComponent.h"

class APlayerCharacter;

void AEventStarterButton::SetIsEventActive(bool NewIsEventActive) {
}

void AEventStarterButton::OnUseProgress(float Progress) {
}

void AEventStarterButton::OnRep_OpenForUse() {
}

void AEventStarterButton::OnRep_Booted() {
}



void AEventStarterButton::CloseForUse(APlayerCharacter* User, EInputKeys Key) {
}

void AEventStarterButton::BootUpEvent() {
}

void AEventStarterButton::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEventStarterButton, Booted);
    DOREPLIFETIME(AEventStarterButton, IsOpenForUse);
    DOREPLIFETIME(AEventStarterButton, IsEventActive);
}

AEventStarterButton::AEventStarterButton() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Usable = CreateDefaultSubobject<USingleUsableComponent>(TEXT("Usable"));
    this->Booted = false;
    this->IsOpenForUse = false;
    this->IsEventActive = true;
}

