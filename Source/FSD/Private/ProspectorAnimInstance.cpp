#include "ProspectorAnimInstance.h"

UProspectorAnimInstance::UProspectorAnimInstance() {
    this->ProspectorState = EProspectorRobotState::Searching;
    this->ArmBusyness = 0.00f;
}

