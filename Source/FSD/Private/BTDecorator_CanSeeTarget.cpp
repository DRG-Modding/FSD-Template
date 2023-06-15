#include "BTDecorator_CanSeeTarget.h"

UBTDecorator_CanSeeTarget::UBTDecorator_CanSeeTarget() {
    this->UseAsync = false;
    this->DebugDraw = false;
    this->MaxRange = 2000.00f;
    this->Interval = -1.00f;
    this->EyeSocketName = TEXT("CenterMass");
    this->TraceChannel = ECC_GameTraceChannel3;
    this->UseTargetable = true;
}

