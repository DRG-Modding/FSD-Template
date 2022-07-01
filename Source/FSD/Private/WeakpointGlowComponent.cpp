#include "WeakpointGlowComponent.h"

class USkeletalMeshComponent;
class UHealthComponentBase;
class UMeshComponent;
class UFSDPhysicalMaterial;
class UCurveFloat;

bool UWeakpointGlowComponent::StopLoopingGlow(int32 aGlowID, bool aFade) {
    return false;
}

void UWeakpointGlowComponent::ShowBodypartHit(float Amount, float BaseAmount, const FDamageData& DamageData) {
}

void UWeakpointGlowComponent::SetUpWeakPointGlowOnMeshByBone(USkeletalMeshComponent*& Mesh, int32 MaterialIndex, FName Bone, UHealthComponentBase* HealthComponent) {
}

int32 UWeakpointGlowComponent::SetUpWeakPointGlowOnMesh(UMeshComponent* Mesh, int32 MaterialIndex, UFSDPhysicalMaterial* PhysicalMaterial, UHealthComponentBase* HealthComponent) {
    return 0;
}

void UWeakpointGlowComponent::SetChannelEnabled(bool Enabled, int32 Channel) {
}

void UWeakpointGlowComponent::EnableWeakpointRegistration(bool Enabled) {
}

void UWeakpointGlowComponent::All_ShowWeakPointHit_Implementation(uint8 Channel) {
}

void UWeakpointGlowComponent::AddWeakpointGlow(bool loopIndefinitely, float LoopTime, UCurveFloat* GrowCurve, UCurveFloat* FadeCurve, int32 UniqueId, int32 Channel) {
}

UWeakpointGlowComponent::UWeakpointGlowComponent() {
    this->EmissiveParam = TEXT("Dynamic Emissive Multiplier");
    this->CurveMultiplier = 1.00f;
    this->WeakPointMaterial = NULL;
    this->AddFirstChannelAutomatically = true;
    this->ReplaceMatIndex = 0;
}

