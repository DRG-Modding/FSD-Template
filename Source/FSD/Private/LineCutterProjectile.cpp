#include "LineCutterProjectile.h"
#include "Net/UnrealNetwork.h"

void ALineCutterProjectile::UpdateBeamLocations() {
}

void ALineCutterProjectile::TerrainSweep(const FVector& Left, const FVector& Right) {
}


void ALineCutterProjectile::SpawnDecal(FHitResult& Result) {
}


void ALineCutterProjectile::Server_RemoveDebris_Implementation(int32 instance, int32 Component) {
}
bool ALineCutterProjectile::Server_RemoveDebris_Validate(int32 instance, int32 Component) {
    return true;
}

void ALineCutterProjectile::OnRep_LineRotation() {
}

void ALineCutterProjectile::Fire(const FVector& Origin, const FVector& Direction, float Distance) {
}

void ALineCutterProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALineCutterProjectile, LineRotation);
    DOREPLIFETIME(ALineCutterProjectile, RotationMode);
}

ALineCutterProjectile::ALineCutterProjectile() {
    this->SwipeRadius = 5.00f;
    this->DoubleLineDistanceMultiplier = 2.00f;
    this->OverlapRadius = 5.00f;
    this->DestroyOnTerrainCollision = true;
    this->IsDead = false;
    this->bHasReversedDirection = false;
    this->FlyStraighTime = 0.20f;
    this->EletricDecalSize = EImpactDecalSize::Small;
    this->ImpactDecalSize = EImpactDecalSize::Small;
    this->LeftSphere = NULL;
    this->RightSphere = NULL;
    this->LeftSphere2 = NULL;
    this->RightSphere2 = NULL;
    this->LeftSphere3 = NULL;
    this->RightSphere3 = NULL;
    this->BeamParticle = NULL;
    this->BeamParticle2 = NULL;
    this->BeamParticle3 = NULL;
    this->RotationSpeed = 400.00f;
    this->RotationMode = ELineRotation::None;
    this->ShouldExplode = false;
    this->OnlyOne = false;
    this->IsDoubleLine = false;
    this->HasPlasmaTrail = false;
    this->LineMaxSize = 150.00f;
    this->LineExpansionDelay = 0.25f;
    this->TimeToLineExpansion = 0.35f;
    this->FireRate = 0.01f;
    this->InitialHitDamageMultiplier = 5;
    this->InhibitImpactDecalsTime = 0.00f;
    this->MinTimeBetweenImpactDecals = 0.15f;
}

