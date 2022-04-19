#include "FakePhysicsProjectile.h"
#include "Net/UnrealNetwork.h"

class UPrimitiveComponent;
class AActor;

void AFakePhysicsProjectile::SphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AFakePhysicsProjectile::OnRep_PosVel(const FFakeMoveState& NewPosVel) {
}

void AFakePhysicsProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFakePhysicsProjectile, posVel);
}

AFakePhysicsProjectile::AFakePhysicsProjectile() {
    this->MoveSettings = NULL;
    this->InitialSpeed = 1000.00f;
    this->DampOmega = 50.00f;
    this->SyncTime = 0.00f;
}

