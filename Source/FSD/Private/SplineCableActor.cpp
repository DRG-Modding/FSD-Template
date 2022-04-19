#include "SplineCableActor.h"
#include "Net/UnrealNetwork.h"
#include "Components/SplineComponent.h"

void ASplineCableActor::SpawnBetweenTransforms(FTransform InStart, FTransform InEnd) {
}

void ASplineCableActor::SetConnected(bool InConnected) {
}



void ASplineCableActor::OnUpdateMaterials_Implementation() {
}

void ASplineCableActor::OnRep_Path() {
}

void ASplineCableActor::OnRep_Connected() {
}

void ASplineCableActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASplineCableActor, ReplicatedPath);
    DOREPLIFETIME(ASplineCableActor, bConnected);
}

ASplineCableActor::ASplineCableActor() {
    this->PathSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("PathSplineComponent"));
    this->CableThickness = 0.25f;
    this->CarveRadius = 0;
    this->MaterialIndex = 1;
    this->CableMeshInstance = NULL;
    this->bConnected = false;
}

