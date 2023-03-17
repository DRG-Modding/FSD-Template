#include "ReloadSentryUsableComponent.h"
#include "Net/UnrealNetwork.h"

void UReloadSentryUsableComponent::SetOwningPlayerCharacter(APlayerCharacter* Player) {
}

void UReloadSentryUsableComponent::SetCanUse(bool isUsable) {
}

void UReloadSentryUsableComponent::OnRep_Reloading() {
}

void UReloadSentryUsableComponent::OnReloadAudioFinished() {
}

void UReloadSentryUsableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UReloadSentryUsableComponent, Usable);
    DOREPLIFETIME(UReloadSentryUsableComponent, bReloading);
    DOREPLIFETIME(UReloadSentryUsableComponent, OwningPlayerCharacter);
}

UReloadSentryUsableComponent::UReloadSentryUsableComponent() {
    this->OutOfAmmoText = FText::FromString(TEXT("Out of Ammo"));
    this->AmmoFullText = FText::FromString(TEXT("Ammo Full"));
    this->AudioOutOfAmmo = NULL;
    this->AudioReloading = NULL;
    this->ReloadingAudioComponent = NULL;
    this->Usable = true;
    this->bReloading = false;
    this->ReloadAudioComponent = NULL;
    this->AmmoPerSec = 1.00f;
    this->SentryGun = NULL;
}

