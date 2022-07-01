#include "GatlingGun.h"
#include "Net/UnrealNetwork.h"
#include "DamageComponent.h"

class AActor;
class UFSDPhysicalMaterial;

void AGatlingGun::Server_SetHotShellsOn_Implementation(bool hotShellsIsOn) {
}
bool AGatlingGun::Server_SetHotShellsOn_Validate(bool hotShellsIsOn) {
    return true;
}

void AGatlingGun::OnRep_HotShellsTracerOn() {
}

void AGatlingGun::OnGatlingTemperatureChanged(float Temperature, bool isOverheated) {
}

void AGatlingGun::OnEnemyKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat, bool wasDirectHit) {
}

void AGatlingGun::Client_RemoveHeat_Implementation() {
}

void AGatlingGun::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGatlingGun, HotShellsOn);
}

AGatlingGun::AGatlingGun() {
    this->BarrelProximityDamageEnabled = false;
    this->BarrelProximityDamageDistance = 250.00f;
    this->BarrelProximityDamageRadius = 100.00f;
    this->BarrelProximityDamageLength = 200.00f;
    this->TimeBetweenProximityDamageTicks = 0.50f;
    this->DamageMultiplierAtMaxStabilization = 1.00f;
    this->HotShellsTracerParticles = NULL;
    this->HeatRemovedOnKill = 0.00f;
    this->CriticalOverheatEnabled = false;
    this->HotShellsOn = false;
    this->HotShellsTemperatureRequired = 200.00f;
    this->DamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("DamageComponent"));
    this->BarrelProximityDamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("BarrelProximityDamage"));
}

