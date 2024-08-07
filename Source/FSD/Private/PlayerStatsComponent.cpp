#include "PlayerStatsComponent.h"
#include "Net/UnrealNetwork.h"

UPlayerStatsComponent::UPlayerStatsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TotalKills = 0;
    this->TotalRevived = 0;
    this->TotalDeaths = 0;
    this->TotalSupplypodsRequested = 0;
    this->TotalGoldMined = 0.00f;
    this->TotalMOMsMined = 0.00f;
    this->TotalMineralsMined = 0.00f;
    this->TotalXPGained = 0.00f;
    this->EscapedInPod = false;
    this->LastPlayedClass = NULL;
}

void UPlayerStatsComponent::SendMissionAnalytics(bool trackMorkite) {
}

void UPlayerStatsComponent::SendEndMissionResult_Implementation(const FEndMissionResult& Result) {
}

void UPlayerStatsComponent::OnResourceMined(UCappedResource* Resource, float amount) {
}

void UPlayerStatsComponent::OnRep_EndMissionResult() {
}

bool UPlayerStatsComponent::IsEndMissionResultReady() const {
    return false;
}

bool UPlayerStatsComponent::GetSurvivedInPod() const {
    return false;
}

void UPlayerStatsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlayerStatsComponent, TotalKills);
    DOREPLIFETIME(UPlayerStatsComponent, TotalRevived);
    DOREPLIFETIME(UPlayerStatsComponent, TotalDeaths);
    DOREPLIFETIME(UPlayerStatsComponent, TotalSupplypodsRequested);
    DOREPLIFETIME(UPlayerStatsComponent, TotalGoldMined);
    DOREPLIFETIME(UPlayerStatsComponent, TotalMOMsMined);
    DOREPLIFETIME(UPlayerStatsComponent, TotalMineralsMined);
    DOREPLIFETIME(UPlayerStatsComponent, TotalXPGained);
    DOREPLIFETIME(UPlayerStatsComponent, EscapedInPod);
    DOREPLIFETIME(UPlayerStatsComponent, LastPlayedClass);
    DOREPLIFETIME(UPlayerStatsComponent, EndMissionResult);
}


