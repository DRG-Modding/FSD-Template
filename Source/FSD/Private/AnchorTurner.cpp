#include "AnchorTurner.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"

AAnchorTurner::AAnchorTurner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->PushCollider1 = CreateDefaultSubobject<USphereComponent>(TEXT("PushCollider1"));
    this->PushCollider2 = CreateDefaultSubobject<USphereComponent>(TEXT("PushCollider2"));
    this->PushCollider3 = CreateDefaultSubobject<USphereComponent>(TEXT("PushCollider3"));
    this->PushCollider4 = CreateDefaultSubobject<USphereComponent>(TEXT("PushCollider4"));
    this->PerPlayerMultiplier = 1.00f;
    this->TurnSpeed = 0.00f;
    this->Progress = 0.00f;
    this->MaxProgress = 100.00f;
    this->Finished = false;
    this->DecaySpeed = 0.10f;
    this->Mesh->SetupAttachment(RootComponent);
    this->PushCollider1->SetupAttachment(Mesh);
    this->PushCollider2->SetupAttachment(Mesh);
    this->PushCollider3->SetupAttachment(Mesh);
    this->PushCollider4->SetupAttachment(Mesh);
}

void AAnchorTurner::OnRep_Finished() {
}

void AAnchorTurner::OnLeftPushpoint(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AAnchorTurner::OnEnteredPushpoint(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


void AAnchorTurner::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAnchorTurner, Progress);
    DOREPLIFETIME(AAnchorTurner, Finished);
}


