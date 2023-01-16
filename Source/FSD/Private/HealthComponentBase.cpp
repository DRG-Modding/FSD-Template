#include "HealthComponentBase.h"

class AActor;
class UPrimitiveComponent;
class UDamageClass;
class UHealth;
class IHealth;
class UParticleSystem;

float UHealthComponentBase::TakeRadialDamage(float damageAmount, FVector BlastCenter, float BlastRadius, float MaxDamageRadius, float MinDamagePct, FDamageData& DamageData) {
    return 0.0f;
}

void UHealthComponentBase::TakeDamageSimple(float damageAmount, AActor* DamageCauser, UDamageClass* DamageClass) {
}

void UHealthComponentBase::SetHealthDirectly(float newHealthValue) {
}

void UHealthComponentBase::SetCanTakeDamage(bool NewCanTakeDamage) {
}

void UHealthComponentBase::Kill(AActor* DamageCauser) {
}

bool UHealthComponentBase::IsDead() const {
    return false;
}

bool UHealthComponentBase::IsAlive() const {
    return false;
}

float UHealthComponentBase::Heal(float Amount) {
    return 0.0f;
}

bool UHealthComponentBase::GetShowHealthBar() const {
    return false;
}

float UHealthComponentBase::GetHealthPct() const {
    return 0.0f;
}

TScriptInterface<IHealth> UHealthComponentBase::GetHealthComponentForCollider(UPrimitiveComponent* Primitive) const {
    return NULL;
}

FVector UHealthComponentBase::GetHealthBarWorldOffset() const {
    return FVector{};
}

float UHealthComponentBase::GetHealth() const {
    return 0.0f;
}

UParticleSystem* UHealthComponentBase::GetGenericImpactParticles() const {
    return NULL;
}

bool UHealthComponentBase::GetCanTakeDamage() const {
    return false;
}

bool UHealthComponentBase::CanTakeDamageFrom(UDamageClass* DamageClass) const {
    return false;
}

UHealthComponentBase::UHealthComponentBase() {
    this->ShowLaserPointMarkerWhenDead = false;
    this->canTakeDamage = true;
    this->PassthroughTemperatureDamage = false;
}

