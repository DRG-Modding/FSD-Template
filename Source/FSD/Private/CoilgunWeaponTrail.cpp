#include "CoilgunWeaponTrail.h"
#include "Net/UnrealNetwork.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"

class UPrimitiveComponent;
class AActor;

void ACoilgunWeaponTrail::OnRep_TrailHalfLength() {
}

void ACoilgunWeaponTrail::OnRep_SpawnFireTrail() {
}

void ACoilgunWeaponTrail::OnInited_Callback() {
}

void ACoilgunWeaponTrail::OnActorLeaveTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ACoilgunWeaponTrail::OnActorEnteredTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ACoilgunWeaponTrail::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACoilgunWeaponTrail, TrailHalgLength);
    DOREPLIFETIME(ACoilgunWeaponTrail, SpawnFireTrail);
}

ACoilgunWeaponTrail::ACoilgunWeaponTrail() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Collision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision"));
    this->Trail = CreateDefaultSubobject<UNiagaraComponent>(TEXT("TrailNiagara"));
    this->ParticleTrailOffset = 0.00f;
    this->TrailHalgLength = 0.00f;
    this->SpawnFireTrail = false;
    this->FireEffect = NULL;
    this->ElectricEffect = NULL;
}

