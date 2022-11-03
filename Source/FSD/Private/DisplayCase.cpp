#include "DisplayCase.h"
#include "Net/UnrealNetwork.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

void ADisplayCase::PlayReactionAnimation() {
}

void ADisplayCase::OnRep_ContentIndex() {
}

bool ADisplayCase::GetCurrentContent(FDisplayContent& currentContent) const {
    return false;
}

void ADisplayCase::ChangeContent() {
}

void ADisplayCase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADisplayCase, ContentIndex);
}

ADisplayCase::ADisplayCase() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ContentAttachPoint = NULL;
    this->ContentMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ContentMesh"));
    this->RotaionSpeed = 0.00f;
    this->BeerMugSpawnChancePercent = 0.00f;
    this->BarrelSpawnChancePercent = 0.10f;
    this->TimeMultiplier = 0.50f;
    this->SizeMultiplier = 1.00f;
    this->ContentIndex = -1;
    this->BeerMugShout = NULL;
}

