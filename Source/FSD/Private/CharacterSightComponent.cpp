#include "CharacterSightComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;
class UPrimitiveComponent;

void UCharacterSightComponent::Server_UpdateTarget_Implementation(AActor* NewActor, UPrimitiveComponent* NewPrimitive) {
}

void UCharacterSightComponent::RemoveIgnoreActor(AActor* InActor) {
}

void UCharacterSightComponent::GetSightStartAndEnd(float InMaxDistance, FVector& OutStartLocation, FVector& OutEndLocation) const {
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

