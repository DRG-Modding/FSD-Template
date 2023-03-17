#include "RockCrackerPod.h"
#include "ContinuousUsableComponent.h"
#include "FriendlyHealthComponent.h"
#include "Net/UnrealNetwork.h"


void ARockCrackerPod::SetPodState(ERockCrackerstate NewPodState) {
}

void ARockCrackerPod::OnRepairTick(APlayerCharacter* User, EInputKeys Key) {
}

void ARockCrackerPod::OnRep_PodState(ERockCrackerstate oldState) {
}

void ARockCrackerPod::OnRep_LightsAreGreen() {
}

void ARockCrackerPod::OnPodDamaged(float damageInfliced, const FDamageData& DamageData, bool anyHealthLost) {
}





bool ARockCrackerPod::IsBroken() const {
    return false;
}

ERockCrackerstate ARockCrackerPod::GetPodState() const {
    return ERockCrackerstate::Init;
}

void ARockCrackerPod::All_SwitchYellowLights_Implementation(bool isGreen) {
}

void ARockCrackerPod::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARockCrackerPod, PodState);
    DOREPLIFETIME(ARockCrackerPod, LightsAreGreen);
}

ARockCrackerPod::ARockCrackerPod() {
    this->Health = CreateDefaultSubobject<UFriendlyHealthComponent>(TEXT("PodHealth"));
    this->RepairUsable = CreateDefaultSubobject<UContinuousUsableComponent>(TEXT("RepairUsable"));
    this->DrainPerSecond = 0.00f;
    this->PodState = ERockCrackerstate::Init;
    this->EndPointDrill = NULL;
    this->InDangerDialogue = NULL;
    this->LightsAreGreen = true;
    this->DrainImmunityTime = 3.00f;
    this->YellowLightsThreshold = 0.80f;
    this->HealPerTick = 25.00f;
}

