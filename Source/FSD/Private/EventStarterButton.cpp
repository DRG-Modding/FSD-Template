#include "EventStarterButton.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"
#include "SingleUsableComponent.h"

AEventStarterButton::AEventStarterButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->Usable = CreateDefaultSubobject<USingleUsableComponent>(TEXT("Usable"));
    this->Booted = false;
    this->IsOpenForUse = false;
    this->IsEventActive = true;
}

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


