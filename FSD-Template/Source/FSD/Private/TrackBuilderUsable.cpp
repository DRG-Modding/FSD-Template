#include "TrackBuilderUsable.h"
#include "Net/UnrealNetwork.h"

class ATrackBuilderSegment;
class AActor;
class APlayerCharacter;

void UTrackBuilderUsable::OnRep_NextSegment() {
}

void UTrackBuilderUsable::OnNextSegmentDestroyed(AActor* InActor) {
}

FTransform UTrackBuilderUsable::GetStartTransform() const {
    return FTransform{};
}

void UTrackBuilderUsable::FinishUse(APlayerCharacter* User, ATrackBuilderSegment* InSegment) {
}

void UTrackBuilderUsable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTrackBuilderUsable, NextSegment);
    DOREPLIFETIME(UTrackBuilderUsable, InUseBy);
}

UTrackBuilderUsable::UTrackBuilderUsable() {
    this->BuilderItemType = NULL;
    this->TrackStartComponent = NULL;
    this->NextSegment = NULL;
}

