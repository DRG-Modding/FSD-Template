#include "PlayerHealthComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class AActor;
class UStatusEffect;
class AController;

UStatusEffect* UPlayerHealthComponent::SetIronWillStatusEffect(TSubclassOf<UStatusEffect> steClass) {
    return NULL;
}

void UPlayerHealthComponent::Server_TryActivateIronWill_Implementation() {
}
bool UPlayerHealthComponent::Server_TryActivateIronWill_Validate() {
    return true;
}

void UPlayerHealthComponent::OnRep_MaxHealth() {
}

void UPlayerHealthComponent::OnRep_MaxArmor() {
}

void UPlayerHealthComponent::OnRep_ArmorDamage(float oldDamage) {
}

bool UPlayerHealthComponent::IsLowHealth() const {
    return false;
}

float UPlayerHealthComponent::GetRemainingIronWillActivationTime() const {
    return 0.0f;
}

bool UPlayerHealthComponent::GetIsHealthRegenerating() const {
    return false;
}

bool UPlayerHealthComponent::GetIronWillActive() const {
    return false;
}

float UPlayerHealthComponent::GetHealthRegeneratingTargetRatio() const {
    return 0.0f;
}

void UPlayerHealthComponent::Client_SetHealthRegenerating_Implementation(bool isRegenerating) {
}
bool UPlayerHealthComponent::Client_SetHealthRegenerating_Validate(bool isRegenerating) {
    return true;
}

void UPlayerHealthComponent::Client_OnFriendlyFire_Implementation(AController* EventInstigator, AActor* DamageCauser) {
}
bool UPlayerHealthComponent::Client_OnFriendlyFire_Validate(AController* EventInstigator, AActor* DamageCauser) {
    return true;
}

void UPlayerHealthComponent::Client_HealthFullCannotHeal_Implementation() {
}
bool UPlayerHealthComponent::Client_HealthFullCannotHeal_Validate() {
    return true;
}

bool UPlayerHealthComponent::CanActivateIronWill() const {
    return false;
}

void UPlayerHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlayerHealthComponent, MaxHealth);
    DOREPLIFETIME(UPlayerHealthComponent, MaxArmor);
    DOREPLIFETIME(UPlayerHealthComponent, ArmorDamage);
    DOREPLIFETIME(UPlayerHealthComponent, IronWillActive);
}

UPlayerHealthComponent::UPlayerHealthComponent() {
    this->MaxHealth = 100.00f;
    this->MaxArmor = 0.00f;
    this->ArmorDamage = 0.00f;
    this->ReviveHealthReturnRatio = 1.00f;
    this->ReviveArmorReturnRatio = 1.00f;
    this->HealthPerCrystalVolume = 0.25f;
    this->ArmorRegenCurve = NULL;
    this->ShieldRegenDelay = 5.00f;
    this->Character = NULL;
    this->GenericImpactParticles = NULL;
    this->ShieldLinkEffect = NULL;
    this->ShieldLinkInstance = NULL;
    this->InvulnerabilityDuration = 0.25f;
    this->ReviveInvulnerabilityTime = 3.00f;
    this->DamageTakenMutator = NULL;
    this->IronWillStatusEffectClass = NULL;
    this->IronWillStatusEffect = NULL;
    this->IronWillActive = false;
    this->IronWillTimeToActivate = 0.00f;
}

