#include "FuelLineEndPoint.h"
#include "Net/UnrealNetwork.h"
#include "FuelLineConnectPoint.h"
#include "Components/StaticMeshComponent.h"

class UTrackBuilderConnectPoint;
class ATrackBuilderSegment;

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

AFuelLineEndPoint::AFuelLineEndPoint() {
    this->ConnectPoint = CreateDefaultSubobject<UFuelLineConnectPoint>(TEXT("ConnectPoint"));
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->AllowedSegment = NULL;
    this->OpenForConnection = true;
}

