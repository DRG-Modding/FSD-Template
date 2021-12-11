#include "Flare.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class AActor;
class AFlare;


void AFlare::OnRep_IsFlareOn() {
}

void AFlare::OnFlareSpawnCompleted_Implementation() {
}



void AFlare::Inhibit() {
}

TSubclassOf<AActor> AFlare::GetWeaponViewClass() const {
    return NULL;
}

AFlare* AFlare::GetFlareDefaultObject(TSubclassOf<AFlare> flareClass) {
    return NULL;
}

void AFlare::ActorWasHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}


void AFlare::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFlare, Duration);
    DOREPLIFETIME(AFlare, IsFlareOn);
}

AFlare::AFlare() {
    this->InitialSpeed = 750.00f;
    this->InitialAngularImpulse = 20.00f;
    this->InitialAngularImpulseRandomScale = 3.00f;
    this->MaxFlares = 3;
    this->ProductionTime = 15.00f;
    this->Duration = 0.00f;
    this->IsFlareOn = true;
    this->DamageCauser = NULL;
    this->WeaponPreviewClass = NULL;
    this->LoadoutItem = NULL;
    this->ItemID = NULL;
    this->ImpactGroundSound = NULL;
}

