#include "FriendlyParasite.h"
#include "Components/SphereComponent.h"
#include "DamageComponent.h"
#include "Net/UnrealNetwork.h"

AFriendlyParasite::AFriendlyParasite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USphereComponent>(TEXT("Collision"))) {
    this->Collision = (USphereComponent*)RootComponent;
    this->FindEnemyCollision = CreateDefaultSubobject<USphereComponent>(TEXT("FindEnemyCollision"));
    this->DamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("DamageComponent"));
    this->MoveSpeed = 350.00f;
    this->DamageBeforeDeath = 1000.00f;
    this->CountDirectDMG = true;
    this->CountAreaDMG = false;
    this->StartFollowRange = 1500.00f;
    this->DamageRange = 350.00f;
    this->DamageTime = 0.25f;
    this->FoldoutRange = 0.00f;
    this->SpinRange = 0.00f;
    this->TargetEnemy = NULL;
    this->FindEnemyCollision->SetupAttachment(RootComponent);
}

void AFriendlyParasite::SelectNewTarget(UHealthComponentBase* Health) {
}

void AFriendlyParasite::OnEnemyCollisionEnter(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AFriendlyParasite::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFriendlyParasite, TargetEnemy);
}


