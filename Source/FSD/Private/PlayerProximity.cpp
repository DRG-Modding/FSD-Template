#include "PlayerProximity.h"

UPlayerProximity::UPlayerProximity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CoolDown = 0.00f;
    this->Distance = 0.00f;
}


