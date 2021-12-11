#include "ShieldGeneratorActor.h"
#include "Net/UnrealNetwork.h"

void AShieldGeneratorActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AShieldGeneratorActor, GeneratorRadius);
    DOREPLIFETIME(AShieldGeneratorActor, DeployDelay);
}

AShieldGeneratorActor::AShieldGeneratorActor() {
    this->GeneratorRadius = 5.00f;
    this->DeployDelay = 2.00f;
    this->bPushStatusEffectOnExit = false;
    this->GeneratorLifetime = 10.00f;
}

