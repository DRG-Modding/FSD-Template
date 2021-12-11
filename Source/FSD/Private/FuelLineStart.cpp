#include "FuelLineStart.h"
#include "Net/UnrealNetwork.h"

class UTrackBuilderUsable;
class ATrackBuilderSegment;


void AFuelLineStart::OnRep_FuelLineConnected() {
}

void AFuelLineStart::CallbackNextSegmentChanged(UTrackBuilderUsable* InUsable, ATrackBuilderSegment* InSegment) {
}

void AFuelLineStart::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFuelLineStart, bFuelLineConnected);
}

AFuelLineStart::AFuelLineStart() {
    this->bFuelLineConnected = false;
}

