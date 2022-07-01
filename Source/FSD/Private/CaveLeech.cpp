#include "CaveLeech.h"
#include "Net/UnrealNetwork.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SceneComponent.h"
#include "GrabberComponent.h"

class AActor;
class UHealthComponentBase;

void ACaveLeech::OnRep_State() {
}

FVector ACaveLeech::GetTentacleTargetLocation() const {
    return FVector{};
}

FVector ACaveLeech::GetMouthLocation_Implementation() const {
    return FVector{};
}

AActor* ACaveLeech::GetCurrentTarget() {
    return NULL;
}

void ACaveLeech::Died(UHealthComponentBase* HealthComponent) {
}

void ACaveLeech::Damaged(float Amount) {
}



void ACaveLeech::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACaveLeech, State);
    DOREPLIFETIME(ACaveLeech, TentacleLocation);
    DOREPLIFETIME(ACaveLeech, TentacleVelocity);
    DOREPLIFETIME(ACaveLeech, Target);
}

ACaveLeech::ACaveLeech() {
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("NewMesh"));
    this->GrabberComponent = CreateDefaultSubobject<UGrabberComponent>(TEXT("Grabber"));
    this->BiteDamage = 10.00f;
    this->BitesPerSecond = 1.00f;
    this->MaxDistanceXY = 300.00f;
    this->GrapDistance = 100.00f;
    this->GrapDelay = 1.00f;
    this->TentacleSpeed = 100.00f;
    this->TentacleRetractSpeed = 120.00f;
    this->RetractDuration = 0.50f;
    this->TentaclePullSpeed = 250.00f;
    this->TentacleDropPlayerSpeed = 500.00f;
    this->TentacleDropGroundDistance = 200.00f;
    this->MaxDropPlayerDuration = 2.00f;
    this->HeadInterpSpeed = 0.50f;
    this->TentacleAttachOffset = 40.00f;
    this->BiteDistance = 100.00f;
    this->RevivedGracePeriod = 10.00f;
    this->CaveLeechSenseAffliction = NULL;
    this->StateTime = 0.00f;
    this->State = ECaveLeechState::Idle;
    this->HealthTarget = NULL;
    this->TentacleHead = CreateDefaultSubobject<USceneComponent>(TEXT("TentacleHead"));
}

