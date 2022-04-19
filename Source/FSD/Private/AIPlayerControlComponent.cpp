#include "AIPlayerControlComponent.h"
#include "ControlEnemyUsable.h"

UAIPlayerControlComponent::UAIPlayerControlComponent() {
    this->SpeedTarget = 250.00f;
    this->SpeedMin = 50.00f;
    this->SpeedMax = 400.00f;
    this->AccelerationBase = 500.00f;
    this->AccelerationMultiplier = 1.00f;
    this->DecelerationMultiplier = 0.35f;
    this->AccelerationOnSlopeMultiplier = 1.50f;
    this->DecelerationOnSlopeMultiplier = 1.30f;
    this->InitialConnectionBlendTime = 0.30f;
    this->GetOnMontageAI = NULL;
    this->GetOnMontagePlayer = NULL;
    this->LetGoMontageAI = NULL;
    this->LetGoMontagePlayer = NULL;
    this->GetOnShout = NULL;
    this->LetGoShout = NULL;
    this->Usable = CreateDefaultSubobject<UControlEnemyUsable>(TEXT("Usable"));
}

