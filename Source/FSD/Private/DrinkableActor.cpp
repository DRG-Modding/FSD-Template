#include "DrinkableActor.h"
#include "Net/UnrealNetwork.h"

ADrinkableActor::ADrinkableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->DrinkableData = NULL;
}

void ADrinkableActor::Pickup(APlayerCharacter* byCharacter) {
}



void ADrinkableActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADrinkableActor, DrinkableData);
}


