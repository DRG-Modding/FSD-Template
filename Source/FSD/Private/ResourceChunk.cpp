#include "ResourceChunk.h"
#include "Net/UnrealNetwork.h"
#include "SimpleObjectInfoComponent.h"

AResourceChunk::AResourceChunk(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->CollectDuration = 0.30f;
    this->CanBeCollectedNormally = true;
    this->CanBeCollected = false;
    this->InfoComponent = CreateDefaultSubobject<USimpleObjectInfoComponent>(TEXT("Info"));
    this->ResourceAmount = 0.00f;
    this->PickupSound = NULL;
    this->ResourceData = NULL;
}

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


