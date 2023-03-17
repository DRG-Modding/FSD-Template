#include "TrackBuilderItem.h"
#include "CrosshairAggregator.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void ATrackBuilderItem::UpdatePlacement(const FTransform& InTransform, UTrackBuilderConnectPoint* InConnectPoint, bool bPlacementValid, bool InUpdateServer) {
}

void ATrackBuilderItem::ServerUpdatePlacement_Implementation(const FTransform& InTransform, const bool bPlacementValid, UTrackBuilderConnectPoint* InConnectPoint) {
}

void ATrackBuilderItem::ServerFinishPlacement_Implementation(const FTransform& FinalLocation, UTrackBuilderConnectPoint* ConnectPoint) {
}

void ATrackBuilderItem::ServerCancelPlacement_Implementation() {
}

void ATrackBuilderItem::ServerBeginPlaceSegment_Implementation(UTrackBuilderUsable* InUsable) {
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

