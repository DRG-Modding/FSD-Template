#include "EscortDestination.h"
#include "Net/UnrealNetwork.h"
#include "DamageComponent.h"

class ADeepCSGWorld;
class UTerrainMaterial;

void AEscortDestination::MeltPlatforms(ADeepCSGWorld* CSGWorld, TArray<FVector> meltPoints, float meltRadius) {
}

UTerrainMaterial* AEscortDestination::GetTerrainMaterialByHandle(ADeepCSGWorld* CSGWorld, int32 materialHandle) {
    return NULL;
}

int32 AEscortDestination::GetSecondsToDestroyObjective() {
    return 0;
}

FVector AEscortDestination::GetClosestPointOnRadius(FVector CurrentLocation, int32 numberOfShellsCracked, FVector& dirFromCenter) {
    return FVector{};
}

void AEscortDestination::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEscortDestination, SecondsToDestroyHeartstone);
}

AEscortDestination::AEscortDestination() {
    this->EndExplosionDamage = CreateDefaultSubobject<UDamageComponent>(TEXT("ExplosionDamage"));
    this->NextBreakpoint = 0.00f;
    this->StageForAnalytics = 0;
    this->SecondsToDestroyHeartstone = 0;
    this->Radius = 30.00f;
    this->ShellThickness = 30.00f;
}

