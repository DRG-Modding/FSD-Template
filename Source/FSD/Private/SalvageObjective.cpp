#include "SalvageObjective.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class URepairableComponent;
class UCurveFloat;
class AProceduralSetup;
class AActor;
class UDebrisPositioning;

void USalvageObjective::PointRepaired() {
}

void USalvageObjective::OnRep_PointsRepaired() {
}

void USalvageObjective::OnRep_ActorsToSalvage(int32 prevAmount) {
}

void USalvageObjective::OnRep_ActorsSalvaged(int32 prevAmount) {
}

void USalvageObjective::OnActorRepaired(URepairableComponent* repairable) {
}

FTransform USalvageObjective::FindRepairPointLocation(AProceduralSetup* setup, const FVector& podLocation, float Radius, float maxVerticalDistance, UDebrisPositioning* DebrisPositioning, TSubclassOf<AActor> terrainPlacement, const TArray<FVector>& locationsToAvoid, UCurveFloat* AvoidCostCurve) {
    return FTransform{};
}


void USalvageObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USalvageObjective, ActorsToSalvage);
    DOREPLIFETIME(USalvageObjective, ActorsSalvaged);
    DOREPLIFETIME(USalvageObjective, PointsRepaired);
}

USalvageObjective::USalvageObjective() {
    this->SalvageActorCount = 2;
    this->LegResource = NULL;
    this->LegCountPerActor = 25;
    this->LegDistanceToActor = 2000.00f;
    this->Positioning = NULL;
    this->DamagedPodPositioning = NULL;
    this->DamagedPodMinDistanceToDropZone = 2000.00f;
    this->DamagedPod = NULL;
    this->ActorsToSalvage = 0;
    this->ActorsSalvaged = 0;
    this->RepairPoints = 3;
    this->PointsRepaired = 0;
    this->MinSalvageActorDistanceToLandingZone = 1000.00f;
    this->HasMuleReturnedToPod = false;
}

