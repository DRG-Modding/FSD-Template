#include "IconGenerationCharacter.h"
#include "Components/SkeletalMeshComponent.h"

AIconGenerationCharacter::AIconGenerationCharacter() {
    this->OrigBaseMaterial = NULL;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh0"));
    this->BodyMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BodyMesh"));
    this->HairColor = NULL;
    this->ArmorMaterial = NULL;
}

