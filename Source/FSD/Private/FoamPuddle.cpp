#include "FoamPuddle.h"
#include "Net/UnrealNetwork.h"
#include "NiagaraComponent.h"
#include "Components/SceneComponent.h"

class UPrimitiveComponent;
class AActor;



void AFoamPuddle::OnRep_State(EVacuumState prevState) {
}

void AFoamPuddle::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AFoamPuddle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFoamPuddle, State);
    DOREPLIFETIME(AFoamPuddle, VacuumSource);
}

AFoamPuddle::AFoamPuddle() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->PuddleRoot = CreateDefaultSubobject<USceneComponent>(TEXT("PuddleRoot"));
    this->NS_Foam = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NS_Vacuum_FP"));
    this->PickupSound = NULL;
    this->VacuumedSound = NULL;
    this->InitialDebrisRadius = 75.00f;
    this->TotalRadiusGrowth = 100.00f;
    this->GrowthTime = 2.00f;
    this->AttractorPowerWhenVacuuming = 1000.00f;
    this->ScaleTimeVacuuming = 1.00f;
    this->Speed = 0.00f;
    this->State = EVacuumState::EPuddle;
    this->VacuumSource = NULL;
    this->MaxSoapPiles = 100;
}

