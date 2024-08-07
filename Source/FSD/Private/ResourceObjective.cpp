#include "ResourceObjective.h"
#include "Net/UnrealNetwork.h"

UResourceObjective::UResourceObjective(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Resource = NULL;
    this->ResourcesRequired = 0.00f;
    this->ResourcesCollected = 0.00f;
    this->ResourceBuffer = 0.50f;
    this->RoundToNearest = 25.00f;
    this->CreditsRewardText = FText::FromString(TEXT("Morkite Collected"));
}

void UResourceObjective::OnResourceChanged(UCappedResource* CappedResource, float amount) {
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


