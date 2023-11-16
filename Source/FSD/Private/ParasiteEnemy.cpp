#include "ParasiteEnemy.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "OutlineComponent.h"

AParasiteEnemy::AParasiteEnemy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->Tentacles1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Tentacles1"));
    this->Tentacles2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Tentacles2"));
    this->outline = CreateDefaultSubobject<UOutlineComponent>(TEXT("outline"));
    this->deathParticles = NULL;
    this->deathSound = NULL;
    this->Mesh->SetupAttachment(RootComponent);
    this->Tentacles1->SetupAttachment(Mesh);
    this->Tentacles2->SetupAttachment(Mesh);
}

void AParasiteEnemy::OnSelfDeath(UHealthComponentBase* aHealthComponent) {
}


