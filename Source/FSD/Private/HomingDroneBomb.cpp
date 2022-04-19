#include "HomingDroneBomb.h"
#include "Net/UnrealNetwork.h"
#include "EnemyHealthComponent.h"

void AHomingDroneBomb::UpdateHomingSpeed() {
}

void AHomingDroneBomb::SearchForTarget() {
}

void AHomingDroneBomb::OnRep_HomingAccelerationMagnitude() {
}

void AHomingDroneBomb::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHomingDroneBomb, HomingAccelerationMagnitude);
}

AHomingDroneBomb::AHomingDroneBomb() {
    this->Health = CreateDefaultSubobject<UEnemyHealthComponent>(TEXT("Health"));
    this->ArmingSound = NULL;
    this->HomingUpdateInterval = 3.00f;
    this->TargetSearchInterval = 0.50f;
    this->ArmTime = 2.00f;
    this->HomingAccelerationMagnitude = 0.00f;
}

