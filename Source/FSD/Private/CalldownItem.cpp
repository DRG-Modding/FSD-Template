#include "CalldownItem.h"

void ACalldownItem::Server_Call_Resupply_Implementation(const FVector& Location) {
}

ACalldownItem::ACalldownItem() {
    this->ItemPlacerClass = NULL;
    this->SupplyPodClass = NULL;
    this->ResouceRequired = NULL;
    this->ResupplyBeacon = NULL;
    this->ItemPlacerInstance = NULL;
    this->CoolDown = 0.00f;
    this->CooldownRemaining = 0.00f;
}

