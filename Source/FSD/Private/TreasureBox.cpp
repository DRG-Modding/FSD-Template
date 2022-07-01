#include "TreasureBox.h"
#include "Net/UnrealNetwork.h"
#include "Components/SkeletalMeshComponent.h"
#include "RepairableComponent.h"
#include "RepairableUsable.h"
#include "SingleUsableComponent.h"
#include "TerrainPlacementComponent.h"
#include "Components/StaticMeshComponent.h"

class UCurveFloat;
class AProceduralSetup;
class UDebrisPositioning;
class APlayerCharacter;

void ATreasureBox::PlaceResources(AProceduralSetup* setup, float Radius, UDebrisPositioning* DebrisPositioning, const TArray<FVector>& locationsToAvoid, UCurveFloat* AvoidCostCurve) {
}

void ATreasureBox::OnUsedEvent(APlayerCharacter* User, EInputKeys Key) {
}

void ATreasureBox::OnRepairedEvent(URepairableComponent* repaired) {
}

void ATreasureBox::OnHammerProgress(float Progress) {
}

void ATreasureBox::OnHammered(APlayerCharacter* User, EInputKeys Key) {
}

void ATreasureBox::OnFullyRepairedEvent(URepairableComponent* repaired) {
}

void ATreasureBox::OnAllResourcesCollectedEvent(URepairableComponent* repaired) {
}


void ATreasureBox::AfterRepairDelay() {
}

void ATreasureBox::ActivateCollection() {
}

void ATreasureBox::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATreasureBox, ItemsInserted);
    DOREPLIFETIME(ATreasureBox, IsTreasureAvailable);
}

ATreasureBox::ATreasureBox() {
    this->repairable = CreateDefaultSubobject<URepairableComponent>(TEXT("repairable"));
    this->RepairUsable = CreateDefaultSubobject<URepairableUsable>(TEXT("RepairUsable"));
    this->HammeringUsable = CreateDefaultSubobject<USingleUsableComponent>(TEXT("HammeringUsable"));
    this->terrainPlacement = CreateDefaultSubobject<UTerrainPlacementComponent>(TEXT("terrainPlacement"));
    this->MiddlePlane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MiddlePlane"));
    this->BoxMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BoxMesh"));
    this->CollectActivationDelay = 5.00f;
    this->OpenBoxAnim = NULL;
    this->DelayToOpenAfterRepair = 2.00f;
    this->ResourceClass = NULL;
    this->boxRewarder = NULL;
    this->HologramRotationSpeed = 10.00f;
    this->ItemsInserted = 0;
    this->IsTreasureAvailable = false;
}

