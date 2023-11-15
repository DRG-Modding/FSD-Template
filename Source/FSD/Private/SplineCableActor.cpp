#include "SplineCableActor.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Net/UnrealNetwork.h"

ASplineCableActor::ASplineCableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->PathSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("PathSplineComponent"));
    this->CableThickness = 0.25f;
    this->CarveRadius = 0;
    this->MaterialIndex = 1;
    this->CableMeshInstance = NULL;
    this->bConnected = false;
    this->PathSplineComponent->SetupAttachment(RootComponent);
}

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


