#include "ParasiteEnemy.h"
#include "Components/StaticMeshComponent.h"
#include "OutlineComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

class UHealthComponentBase;

void AParasiteEnemy::OnSelfDeath(UHealthComponentBase* aHealthComponent) {
}

AParasiteEnemy::AParasiteEnemy() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->Tentacles1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Tentacles1"));
    this->Tentacles2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Tentacles2"));
    this->outline = CreateDefaultSubobject<UOutlineComponent>(TEXT("outline"));
    this->deathParticles = NULL;
    this->deathSound = NULL;
}

