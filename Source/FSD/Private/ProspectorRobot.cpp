#include "ProspectorRobot.h"
#include "Net/UnrealNetwork.h"

class AActor;

void AProspectorRobot::SetTarget(AActor* NewTarget) {
}

void AProspectorRobot::SetArmSpeed(float Speed) {
}



void AProspectorRobot::OnRep_ProspectorState(EProspectorRobotState oldState) {
}

bool AProspectorRobot::IsStateActive(EProspectorRobotState State) const {
    return false;
}

void AProspectorRobot::ChangeState(EProspectorRobotState NewState) {
}

void AProspectorRobot::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AProspectorRobot, ProspectorState);
}

AProspectorRobot::AProspectorRobot() {
    this->WorkingArmSpeed = 5.00f;
    this->EnginePowerMultiplier = 1.00f;
    this->Target = NULL;
    this->HeadResponsiveness = 1.00f;
    this->HeadSearchSpeed = 1.00f;
    this->HeadSearchMaxAngle = 90.00f;
    this->EngineMaterial = NULL;
    this->ProspectorState = EProspectorRobotState::Searching;
}

