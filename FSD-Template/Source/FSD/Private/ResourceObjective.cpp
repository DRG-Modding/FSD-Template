#include "ResourceObjective.h"
#include "Net/UnrealNetwork.h"

class UCappedResource;

void UResourceObjective::OnResourceChanged(UCappedResource* CappedResource, float Amount) {
}

void UResourceObjective::OnRep_ResourcesCollected(float prevAmount) {
}

float UResourceObjective::GetRequiredAmount(float missionScaling) const {
    return 0.0f;
}

void UResourceObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UResourceObjective, ResourcesCollected);
}

UResourceObjective::UResourceObjective() {
    this->Resource = NULL;
    this->ResourcesRequired = 0.00f;
    this->ResourcesCollected = 0.00f;
    this->ResourceBuffer = 0.50f;
    this->RoundToNearest = 25.00f;
}

