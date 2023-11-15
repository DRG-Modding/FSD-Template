#include "VanityCharacter.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

AVanityCharacter::AVanityCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("ItemInstance"));
    this->Animation = NULL;
    this->skinColor = NULL;
    this->BeardColor = NULL;
    this->DynamicBeardColor = NULL;
    this->Head = NULL;
    this->EyeBrows = NULL;
    this->Sideburns = NULL;
    this->Moustache = NULL;
    this->Beard = NULL;
    this->Armor = NULL;
    this->ArmorColor = NULL;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh0"));
    this->BodyMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BodyMesh"));
    this->DefaultHairColor = NULL;
    this->DefaultArmorMaterial = NULL;
    this->itemClass = NULL;
    this->Framework = NULL;
    this->Paintjob = NULL;
    this->Mesh->SetupAttachment(RootComponent);
    this->BodyMesh->SetupAttachment(RootComponent);
}

void AVanityCharacter::DisplayVanity() {
}

void AVanityCharacter::Clean() {
}


