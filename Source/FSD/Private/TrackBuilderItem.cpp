#include "TrackBuilderItem.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "CrosshairAggregator.h"

class UTrackBuilderConnectPoint;
class UTrackBuilderUsable;
class ATrackBuilderSegment;

void ATrackBuilderItem::UpdatePlacement(const FTransform& InTransform, UTrackBuilderConnectPoint* InConnectPoint, bool bPlacementValid, bool InUpdateServer) {
}

void ATrackBuilderItem::ServerUpdatePlacement_Implementation(const FTransform& InTransform, const bool bPlacementValid, UTrackBuilderConnectPoint* InConnectPoint) {
}
bool ATrackBuilderItem::ServerUpdatePlacement_Validate(const FTransform& InTransform, const bool bPlacementValid, UTrackBuilderConnectPoint* InConnectPoint) {
    return true;
}

void ATrackBuilderItem::ServerFinishPlacement_Implementation(const FTransform& FinalLocation, UTrackBuilderConnectPoint* ConnectPoint) {
}
bool ATrackBuilderItem::ServerFinishPlacement_Validate(const FTransform& FinalLocation, UTrackBuilderConnectPoint* ConnectPoint) {
    return true;
}

void ATrackBuilderItem::ServerCancelPlacement_Implementation() {
}
bool ATrackBuilderItem::ServerCancelPlacement_Validate() {
    return true;
}

void ATrackBuilderItem::ServerBeginPlaceSegment_Implementation(UTrackBuilderUsable* InUsable) {
}
bool ATrackBuilderItem::ServerBeginPlaceSegment_Validate(UTrackBuilderUsable* InUsable) {
    return true;
}


void ATrackBuilderItem::OnRep_NextSegment() {
}

TSubclassOf<ATrackBuilderSegment> ATrackBuilderItem::GetSegmentType() const {
    return NULL;
}

void ATrackBuilderItem::FinishPlacement(const FTransform& FinalLocation, UTrackBuilderConnectPoint* ConnectPoint) {
}

void ATrackBuilderItem::CancelPlacement() {
}

FVector ATrackBuilderItem::AdjustInitialLocation(const FVector& Location) const {
    return FVector{};
}

void ATrackBuilderItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATrackBuilderItem, NextSegment);
    DOREPLIFETIME(ATrackBuilderItem, bIsPlacingSegment);
}

ATrackBuilderItem::ATrackBuilderItem() {
    this->CrosshairAggregator = CreateDefaultSubobject<UCrosshairAggregator>(TEXT("CrosshairAggregator"));
    this->ObstructionType = EPlaceableObstructionType::Valid;
    this->DefaultSegmentType = NULL;
    this->NextSegment = NULL;
    this->bIsPlacingSegment = false;
}

