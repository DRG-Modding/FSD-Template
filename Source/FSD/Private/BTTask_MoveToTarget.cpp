#include "BTTask_MoveToTarget.h"

UBTTask_MoveToTarget::UBTTask_MoveToTarget() {
    this->NodeName = TEXT("Move To");
    this->AcceptableRadius = 5.00f;
    this->ToCenterOfMass = false;
}


