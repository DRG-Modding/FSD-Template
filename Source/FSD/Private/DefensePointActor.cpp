#include "DefensePointActor.h"
#include "Net/UnrealNetwork.h"
#include "SingleUsableComponent.h"

ADefensePointActor::ADefensePointActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->DefenseEvent = NULL;
    this->ActiveDefenceEvent = NULL;
    this->DefendState = EDefendPointState::Idle;
    this->DefendPointUsable = CreateDefaultSubobject<USingleUsableComponent>(TEXT("DefendPointUsable"));
}

void ADefensePointActor::SetState(EDefendPointState State) {
}

void ADefensePointActor::OnRep_DefendState() {
}

void ADefensePointActor::OnDefensePointActivated(APlayerCharacter* Player, EInputKeys Key) {
}




void ADefensePointActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADefensePointActor, DefendState);
}


