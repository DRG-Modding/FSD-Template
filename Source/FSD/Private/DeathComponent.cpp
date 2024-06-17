#include "DeathComponent.h"
#include "Net/UnrealNetwork.h"

UDeathComponent::UDeathComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CrossbowChemicalExplosionStatusEffect = NULL;
    this->PlasmaExplosionStatusEffect = NULL;
    this->PlasmaExplosionDOTStatusEffect = NULL;
    this->GibParticles = NULL;
    this->GoreMesh = NULL;
    this->deathParticles = NULL;
    this->BloodSquirtParticles = NULL;
    this->HeadshotParticles = NULL;
    this->FrozenDeathParticles = NULL;
    this->CorrosiveDeathParticles = NULL;
    this->CookedDeathParticles = NULL;
    this->ChemicalExplosionDeathParticles = NULL;
    this->DeathSplatDecal = NULL;
    this->DeathSplatDecalSize = 0.00f;
    this->deathSound = NULL;
    this->HeadshotGibsSound = NULL;
    this->BurnDeathSound = NULL;
    this->CorrosiveDeathSound = NULL;
    this->CookedDeathSound = NULL;
    this->ChemicalExplosionPreDeathSound = NULL;
    this->ChemicalExplosionDeathSound = NULL;
    this->DeathSplatSound = NULL;
    this->DissolveDelay = 0.00f;
    this->DissolveBaseShader = NULL;
    this->DissolveBaseShaderElite = NULL;
    this->BurnBaseShader = NULL;
    this->BurnBaseShaderElite = NULL;
    this->CorrosiveBaseShader = NULL;
    this->CorrosiveBaseShaderElite = NULL;
    this->RagdollEnabled = true;
    this->CameraShake = NULL;
    this->DeathDuration = 0.00f;
    this->DeathType = EDeathType::Alive;
    this->HeadGoreMesh = NULL;
    this->SkeletalMesh = NULL;
    this->PFCharacter = NULL;
    this->AnimInstance = NULL;
}

void UDeathComponent::OnRep_DeathType() {
}

void UDeathComponent::OnDeathDetailed(UHealthComponent* HealthComponent, float damageAmount, const FDamageData& DamageData, const TArray<UDamageTag*>& Tags) {
}

UStaticMeshComponent* UDeathComponent::CreateHeadGore() {
    return NULL;
}

void UDeathComponent::AllRagdoll_Implementation(FVector Impulse, FVector Location, int32 BoneIndex) {
}

void UDeathComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDeathComponent, DeathType);
}


