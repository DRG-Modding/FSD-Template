#include "EnemyTemperatureComponent.h"

class UDamageTag;
class AActor;
class UHealthComponent;
class UDamageClass;
class UFSDPhysicalMaterial;
class AController;
class UStatusEffectsComponent;

void UEnemyTemperatureComponent::TimerCallback() {
}

void UEnemyTemperatureComponent::OnDeath(UHealthComponent* HealthComponent, float damageAmount, UDamageClass* DamageClass, AActor* damageCause, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial, bool IsRadial, const TArray<UDamageTag*>& Tags) {
}

void UEnemyTemperatureComponent::DoTemperatureShock(UStatusEffectsComponent* Status) {
}

void UEnemyTemperatureComponent::All_IceDetonation_Implementation() {
}

void UEnemyTemperatureComponent::All_FireDetonation_Implementation() {
}

UEnemyTemperatureComponent::UEnemyTemperatureComponent() {
    this->UpdateTime = 1.00f;
    this->DieIfFrozen = false;
    this->DieIfBurning = false;
    this->TemperatureChangeScale = 1.00f;
    this->BurnTemperature = 30.00f;
    this->DouseFireTemperature = 0.00f;
    this->FreezeTemperature = -50.00f;
    this->UnFreezeTemperature = 0.00f;
    this->WarmingRate = 10;
    this->CoolingRate = 10;
    this->IsHeatsourceWhenOnFire = true;
    this->OnFireHeatRange = 150.00f;
    this->MaxColdSlowdown = 0.25f;
    this->DetonationSetting = NULL;
    this->PawnStats = NULL;
    this->WarmingCooldown = 2;
    this->FireDetonationStack = 0;
    this->IceDetonationStack = 0;
}

