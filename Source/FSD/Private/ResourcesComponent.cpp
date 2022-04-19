#include "ResourcesComponent.h"
#include "Net/UnrealNetwork.h"

class UCappedResource;
class UResourceData;

void UResourcesComponent::ResourceIncreased(UCappedResource* Resource, float Delta) {
}

void UResourcesComponent::ResourceFull(UCappedResource* Resource) {
}

void UResourcesComponent::ResourceChanged(UCappedResource* Resource, float currentAmount) {
}

void UResourcesComponent::OnRep_Resources() {
}

int32 UResourcesComponent::GetXPFromResourceMap(const TMap<UResourceData*, float>& NewResources) {
    return 0;
}

int32 UResourcesComponent::GetXpFromMining() const {
    return 0;
}

TMap<UResourceData*, float> UResourcesComponent::GetSeparateResourcesFromMap(const TMap<UResourceData*, float>& NewResources) {
    return TMap<UResourceData*, float>();
}

UCappedResource* UResourcesComponent::GetResource(UResourceData* Data, bool createIfAmountIsZero) {
    return NULL;
}

float UResourcesComponent::GetCapacityPct() const {
    return 0.0f;
}

TArray<UCappedResource*> UResourcesComponent::GetAllResources() {
    return TArray<UCappedResource*>();
}

void UResourcesComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UResourcesComponent, Resources);
}

UResourcesComponent::UResourcesComponent() {
    this->ResourceCap = -1.00f;
}

