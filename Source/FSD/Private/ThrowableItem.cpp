#include "ThrowableItem.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class AThrowableActor;
class AActor;

void AThrowableItem::Simulate_Throw_Implementation(TSubclassOf<AThrowableActor> ActorClass) {
}

void AThrowableItem::Server_Throw_Implementation(TSubclassOf<AThrowableActor> ActorClass) {
}
bool AThrowableItem::Server_Throw_Validate(TSubclassOf<AThrowableActor> ActorClass) {
    return true;
}



void AThrowableItem::OnThrownActorDestroyed(AActor* Actor) {
}

FVector AThrowableItem::GetThrowLocation_Implementation() const {
    return FVector{};
}

void AThrowableItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AThrowableItem, CooldownLeft);
}

AThrowableItem::AThrowableItem() {
    this->ThrowableClass = NULL;
    this->FPThrowMontage = NULL;
    this->TPThrowMontage = NULL;
    this->ThrowVelocity = 0.00f;
    this->InheritOwnerVelocityScale = 0.00f;
    this->ThrowAngle = 0.00f;
    this->CooldownAfterThrow = 1.00f;
    this->CooldownAfterDetonation = 2.00f;
    this->CanThrowBeforeEquipAnimFinish = false;
    this->ThrowDelay = 0.00f;
    this->ThrowZOffset = 0.00f;
    this->CooldownLeft = 0.00f;
    this->LoadoutItem = NULL;
}

