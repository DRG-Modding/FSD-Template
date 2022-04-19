#include "ResourceChunk.h"
#include "Net/UnrealNetwork.h"
#include "SimpleObjectInfoComponent.h"

class UResourceData;

void AResourceChunk::SetCollectOpen() {
}

void AResourceChunk::OnRep_CollectedBy() {
}

UResourceData* AResourceChunk::GetResourceData() const {
    return NULL;
}

float AResourceChunk::GetResourceAmount() const {
    return 0.0f;
}


void AResourceChunk::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AResourceChunk, CollectedBy);
}

AResourceChunk::AResourceChunk() {
    this->CollectDuration = 0.30f;
    this->CanBeCollectedNormally = true;
    this->CanBeCollected = false;
    this->InfoComponent = CreateDefaultSubobject<USimpleObjectInfoComponent>(TEXT("Info"));
    this->ResourceAmount = 0.00f;
    this->PickupSound = NULL;
    this->ResourceData = NULL;
}

