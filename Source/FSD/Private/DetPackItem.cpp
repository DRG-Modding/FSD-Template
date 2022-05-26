#include "DetPackItem.h"
#include "Net/UnrealNetwork.h"
#include "FirstPersonSkeletalMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "CapacityHoldingItemAggregator.h"

void ADetPackItem::Simulate_ThrowGrenade_Implementation() {
}

void ADetPackItem::Server_ThrowGrenade_Implementation() {
}
bool ADetPackItem::Server_ThrowGrenade_Validate() {
    return true;
}

void ADetPackItem::Server_Detonate_Implementation() {
}
bool ADetPackItem::Server_Detonate_Validate() {
    return true;
}

void ADetPackItem::Server_CycleItem_Implementation() {
}
bool ADetPackItem::Server_CycleItem_Validate() {
    return true;
}


void ADetPackItem::OnRep_IsDetonatorOut() {
}

void ADetPackItem::OnDetonatingFinished() {
}

int32 ADetPackItem::GetCurrentGrenades() const {
    return 0;
}

void ADetPackItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADetPackItem, IsDetonatorOut);
    DOREPLIFETIME(ADetPackItem, HasThrownPack);
}

ADetPackItem::ADetPackItem() {
    this->DetPackClass = NULL;
    this->LoadoutProxy = NULL;
    this->FPThrowMontage = NULL;
    this->TPThrowMontage = NULL;
    this->FP_DetonateAnim = NULL;
    this->WPN_DetonateAnim = NULL;
    this->FP_EquipDetonatorAnimation = NULL;
    this->WPN_EquipDetonatorAnimation = NULL;
    this->DetonatorFPMesh = CreateDefaultSubobject<UFirstPersonSkeletalMeshComponent>(TEXT("DetonatorFPMesh"));
    this->DetonatorTPMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("DetonatorTPMesh"));
    this->DetonatorTriggerForceFeedback = NULL;
    this->Capacity = CreateDefaultSubobject<UCapacityHoldingItemAggregator>(TEXT("Aggregator"));
    this->SupplyStatusWeight = 1.00f;
    this->ThrowVelocity = 0.00f;
    this->EnheiritOwnerVelocityScale = 0.00f;
    this->ThrowAngle = 0.00f;
    this->CooldownAfterThrow = 1.00f;
    this->CooldownAfterDetonation = 2.00f;
    this->ThrowDelay = 0.00f;
    this->ThrowZOffset = 0.00f;
    this->ShoutDetPackPlaced = NULL;
    this->ShoutOutOfAmmo = NULL;
    this->CooldownLeft = 0.00f;
    this->IsDetonatorOut = false;
    this->HasThrownPack = false;
}

