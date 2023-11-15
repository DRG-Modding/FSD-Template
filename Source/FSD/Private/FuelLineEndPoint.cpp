#include "FuelLineEndPoint.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "FuelLineConnectPoint.h"
#include "Net/UnrealNetwork.h"

AFuelLineEndPoint::AFuelLineEndPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->ConnectPoint = CreateDefaultSubobject<UFuelLineConnectPoint>(TEXT("ConnectPoint"));
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->AllowedSegment = NULL;
    this->OpenForConnection = true;
    this->ConnectPoint->SetupAttachment(RootComponent);
    this->StaticMesh->SetupAttachment(RootComponent);
}

void AFuelLineEndPoint::SetOpenForConnection(bool Open) {
}


bool AFuelLineEndPoint::IsOpenForConnection() const {
    return false;
}

void AFuelLineEndPoint::CallbackConnectedWithSegment(UTrackBuilderConnectPoint* InConnectPoint, ATrackBuilderSegment* InSegment) {
}

void AFuelLineEndPoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFuelLineEndPoint, OpenForConnection);
}


