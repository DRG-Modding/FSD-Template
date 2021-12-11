#include "CharacterSightComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;
class UPrimitiveComponent;

void UCharacterSightComponent::Server_UpdateTarget_Implementation(AActor* NewActor, UPrimitiveComponent* NewPrimitive) {
}
bool UCharacterSightComponent::Server_UpdateTarget_Validate(AActor* NewActor, UPrimitiveComponent* NewPrimitive) {
    return true;
}

void UCharacterSightComponent::RemoveIgnoreActor(AActor* InActor) {
}



void UCharacterSightComponent::GetSightStartAndEnd(float InMaxDistance, FVector& OutStartLocation, FVector& OutEndLocation) {
}

void UCharacterSightComponent::AddIgnoreActor(AActor* InActor) {
}

void UCharacterSightComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCharacterSightComponent, ReplicatedData);
}

UCharacterSightComponent::UCharacterSightComponent() {
    this->TargetMaxDistance = 10000.00f;
    this->TraceChannel = ECC_GameTraceChannel3;
    this->Character = NULL;
    this->TargetTime = 0.00f;
}

