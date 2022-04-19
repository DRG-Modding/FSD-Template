#include "FuelLineEndPoint.h"
#include "FuelLineConnectPoint.h"
#include "Components/StaticMeshComponent.h"

class UTrackBuilderConnectPoint;
class ATrackBuilderSegment;


void AFuelLineEndPoint::CallbackConnectedWithSegment(UTrackBuilderConnectPoint* InConnectPoint, ATrackBuilderSegment* InSegment) {
}

AFuelLineEndPoint::AFuelLineEndPoint() {
    this->ConnectPoint = CreateDefaultSubobject<UFuelLineConnectPoint>(TEXT("ConnectPoint"));
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
}

