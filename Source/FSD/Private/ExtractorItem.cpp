#include "ExtractorItem.h"
#include "Net/UnrealNetwork.h"
#include "Components/PointLightComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "FSDAudioComponent.h"

class AResourceChunk;


void AExtractorItem::Server_StopMining_Implementation() {
}
bool AExtractorItem::Server_StopMining_Validate() {
    return true;
}

void AExtractorItem::Server_StartMining_Implementation() {
}
bool AExtractorItem::Server_StartMining_Validate() {
    return true;
}

void AExtractorItem::Server_SetReadyToExtract_Implementation(bool IsReady) {
}
bool AExtractorItem::Server_SetReadyToExtract_Validate(bool IsReady) {
    return true;
}

void AExtractorItem::Server_DigBlock_Implementation(FVector_NetQuantize Start, FVector_NetQuantize End) {
}
bool AExtractorItem::Server_DigBlock_Validate(FVector_NetQuantize Start, FVector_NetQuantize End) {
    return true;
}

void AExtractorItem::Server_CollectChunk_Implementation(AResourceChunk* chunk) {
}
bool AExtractorItem::Server_CollectChunk_Validate(AResourceChunk* chunk) {
    return true;
}

void AExtractorItem::ResetCurrentLoad() {
}





void AExtractorItem::OnRep_SimulatingMining() {
}

void AExtractorItem::OnRep_IsGunslinging() {
}

void AExtractorItem::OnRep_CurrentLoad() {
}


void AExtractorItem::OnChunkCooldownOver() {
}

bool AExtractorItem::IsFull() const {
    return false;
}

UBoxComponent* AExtractorItem::GetRootCollider() const {
    return NULL;
}

void AExtractorItem::All_SimulateDigBlock_Implementation(FVector_NetQuantize Position, bool spawnParticles, int32 Material) {
}

void AExtractorItem::All_ChunkSplat_Implementation(AResourceChunk* chunk) {
}

void AExtractorItem::AddResource(float Amount) {
}

void AExtractorItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AExtractorItem, IsMining);
    DOREPLIFETIME(AExtractorItem, IsGunslinging);
    DOREPLIFETIME(AExtractorItem, ReadyToExtract);
    DOREPLIFETIME(AExtractorItem, CurrentLoad);
}

AExtractorItem::AExtractorItem() {
    this->DroppedCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Root"));
    this->DroppedMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("DropppedMesh"));
    this->FP_DrillParticles = NULL;
    this->AudioComponent = CreateDefaultSubobject<UFSDAudioComponent>(TEXT("Audio"));
    this->SurfaceLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("SurfaceLight"));
    this->MeltingParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MeltingEffect"));
    this->InvalidSurfaceParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("InvalidSurfaceParticles"));
    this->FPMuzzleParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MuzzleEffect"));
    this->FPMuzzleInvalidParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MuzzleEInvalidffect"));
    this->TPMuzzleParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("TPMuzzleEffect"));
    this->TPMuzzleInvalidParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("TPMuzzleInvalidEffect"));
    this->FPMineMontage = NULL;
    this->TPMineMontage = NULL;
    this->FPGunsling = NULL;
    this->TPGunsling = NULL;
    this->DrillParticles = NULL;
    this->DrillRumble = NULL;
    this->BlockParticlesScaleFP = 1.00f;
    this->BlockParticlesScaleTP = 1.00f;
    this->State = EExtractorState::Attached;
    this->MovementPenalty = 0.70f;
    this->CarverRayCastLength = 200.00f;
    this->CarveTerrainDistanceCheck = 2.00f;
    this->CurrentDrillSpeed = 0.00f;
    this->DrillParticlesDuration = 0.25f;
    this->ExtractetMaterial = NULL;
    this->TimeBeforeInvalidShout = 2.00f;
    this->InvalidSurfaceShout = NULL;
    this->ShoutFull = NULL;
    this->DigSound = NULL;
    this->IsMining = false;
    this->IsGunslinging = false;
    this->ReadyToExtract = false;
    this->VacuumEffect = NULL;
    this->ChunkSplatEffect = NULL;
    this->ChunkSplatSound = NULL;
    this->MaxDifference = 20.00f;
    this->MeltingTime = 0.65f;
    this->ChunkMultiplier = 1.00f;
    this->CollectChunkCooldown = 0.50f;
    this->CrossfadeSpeed = 0.00f;
    this->VacuumEffectOffset = 0.00f;
    this->MaxCapacity = 250.00f;
    this->PlayerCountBonus = 1.33f;
    this->SurfaceLightMinIntensity = 100.00f;
    this->SurfaceLightMaxIntensity = 1000.00f;
    this->CurrentLoad = 0.00f;
}

