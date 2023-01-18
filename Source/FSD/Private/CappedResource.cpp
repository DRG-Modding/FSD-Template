#include "CappedResource.h"
#include "Net/UnrealNetwork.h"

class UCappedResource;
class UObject;

float UCappedResource::TransferAll(UCappedResource* Receiver) {
    return 0.0f;
}

float UCappedResource::Transfer(float Amount, UCappedResource* Receiver) {
    return 0.0f;
}

void UCappedResource::OnRep_FullFlag(int32 OldValue) {
}

void UCappedResource::OnRep_CurrentAmount(float OldAmount) {
}

bool UCappedResource::IsObjectiveResource(UObject* WorldContext, bool& IsCompleted) const {
    return false;
}

bool UCappedResource::IsFull() const {
    return false;
}

bool UCappedResource::isEmpty() const {
    return false;
}

bool UCappedResource::IsCraftingResource() const {
    return false;
}

FText UCappedResource::GetTitle() const {
    return FText::GetEmpty();
}

FColor UCappedResource::GetColor() const {
    return FColor{};
}

float UCappedResource::GetCapacityPct() const {
    return 0.0f;
}

float UCappedResource::Deduct(float Amount) {
    return 0.0f;
}

float UCappedResource::Add(float Amount) {
    return 0.0f;
}

void UCappedResource::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCappedResource, Data);
    DOREPLIFETIME(UCappedResource, currentAmount);
    DOREPLIFETIME(UCappedResource, MaxAmount);
    DOREPLIFETIME(UCappedResource, TotalCollected);
    DOREPLIFETIME(UCappedResource, FullFlag);
}

UCappedResource::UCappedResource() {
    this->Data = NULL;
    this->currentAmount = 0.00f;
    this->MaxAmount = 50.00f;
    this->TotalCollected = 0.00f;
    this->FullFlag = 0;
}

