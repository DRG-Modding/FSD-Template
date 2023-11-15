#include "MountedGun.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

AMountedGun::AMountedGun(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->WeaponFire = NULL;
    this->GunLogic = NULL;
    this->Mesh->SetupAttachment(RootComponent);
}

void AMountedGun::Server_Test_Implementation() {
}


