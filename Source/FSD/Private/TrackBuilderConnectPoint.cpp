#include "TrackBuilderConnectPoint.h"
#include "Net/UnrealNetwork.h"

class ATrackBuilderSegment;

void UTrackBuilderConnectPoint::OnRep_ConnectedSegment() {
}

FTransform UTrackBuilderConnectPoint::GetConnectTransform_Implementation(const FTransform& FromWorldTransform) {
    return FTransform{};
}

bool UTrackBuilderConnectPoint::Disconnect(ATrackBuilderSegment* InSegment) {
    return false;
}

bool UTrackBuilderConnectPoint::Connect(ATrackBuilderSegment* InSegment) {
    return false;
}

bool UTrackBuilderConnectPoint::CanConnectWith_Implementation(ATrackBuilderSegment* InSegment, const FTransform& FromWorldTransform) {
    return false;
}

void UTrackBuilderConnectPoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTrackBuilderConnectPoint, ConnectedSegment);
}

UTrackBuilderConnectPoint::UTrackBuilderConnectPoint() {
    this->ConnectType = NULL;
    this->MaxConnectRadius = 150.00f;
    this->ConnectDistance = 0.00f;
}

