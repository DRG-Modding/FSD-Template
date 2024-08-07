#include "ThrowableItem.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AThrowableItem::AThrowableItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ThrowableClass = NULL;
    this->FPThrowMontage = NULL;
    this->TPThrowMontage = NULL;
    this->ThrowVelocity = 0.00f;
    this->InheritOwnerVelocityScale = 0.00f;
    this->ThrowAngle = 0.00f;
    this->CooldownAfterThrow = 1.00f;
    this->CanThrowBeforeEquipAnimFinish = false;
    this->CooldownAfterEquip = 0.25f;
    this->ThrowDelay = 0.00f;
    this->CooldownLeft = 0.00f;
    this->LoadoutItem = NULL;
}

void AThrowableItem::Simulate_Throw_Implementation(TSubclassOf<AThrowableActor> actorClass) {
}

void AThrowableItem::Server_Throw_Implementation(TSubclassOf<AThrowableActor> actorClass, const FVector& Location) {
}



void AThrowableItem::OnThrownActorDestroyed(AActor* Actor) {
}

void AThrowableItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AThrowableItem, CooldownLeft);
}


