#include "FuelLineStart.h"
#include "Components/StaticMeshComponent.h"
#include "FuelLineStartUsable.h"
#include "Net/UnrealNetwork.h"
#include "OutlineComponent.h"
#include "SimpleObjectInfoComponent.h"


void AFuelLineStart::OnRep_FuelLineConnected() {
}

void AFuelLineStart::CallbackNextSegmentChanged(UTrackBuilderUsable* InUsable, ATrackBuilderSegment* InSegment) {
}

void AFuelLineStart::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFuelLineStart, bFuelLineConnected);
}

AFuelLineStart::AFuelLineStart() {
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->OutlineComponent = CreateDefaultSubobject<UOutlineComponent>(TEXT("OutlineComponent"));
    this->ObjectInfoComponent = CreateDefaultSubobject<USimpleObjectInfoComponent>(TEXT("ObjectInfo"));
    this->UsableStartFuelLine = CreateDefaultSubobject<UFuelLineStartUsable>(TEXT("UsableStartFuelLine"));
    this->bFuelLineConnected = false;
}

