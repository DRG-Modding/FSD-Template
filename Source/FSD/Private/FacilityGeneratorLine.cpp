#include "FacilityGeneratorLine.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Net/UnrealNetwork.h"
#include "SplineDecoratorComponent.h"

AFacilityGeneratorLine::AFacilityGeneratorLine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->HeightOffsetMin = -100.00f;
    this->HeightOffsetMax = 100.00f;
    this->MaxSegmentLength = 1000.00f;
    this->CarveRadius = 50.00f;
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->SplineDecorator = CreateDefaultSubobject<USplineDecoratorComponent>(TEXT("SplineDecorator"));
    this->Station = NULL;
    this->MeshInstance = NULL;
    this->Connected = true;
    this->SplineComponent->SetupAttachment(RootComponent);
    this->SplineDecorator->SetupAttachment(RootComponent);
}

void AFacilityGeneratorLine::SetConnected(bool InConnected) {
}


void AFacilityGeneratorLine::OnRep_Path() {
}

void AFacilityGeneratorLine::OnRep_Connected() {
}

void AFacilityGeneratorLine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFacilityGeneratorLine, ReplicatedPath);
    DOREPLIFETIME(AFacilityGeneratorLine, Connected);
}


