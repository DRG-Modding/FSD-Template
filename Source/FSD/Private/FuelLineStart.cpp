#include "FuelLineStart.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "FuelLineStartUsable.h"
#include "Net/UnrealNetwork.h"
#include "OutlineComponent.h"
#include "SimpleObjectInfoComponent.h"

AFuelLineStart::AFuelLineStart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRootComponent"));
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->OutlineComponent = CreateDefaultSubobject<UOutlineComponent>(TEXT("OutlineComponent"));
    this->ObjectInfoComponent = CreateDefaultSubobject<USimpleObjectInfoComponent>(TEXT("ObjectInfo"));
    this->UsableStartFuelLine = CreateDefaultSubobject<UFuelLineStartUsable>(TEXT("UsableStartFuelLine"));
    this->bFuelLineConnected = false;
    this->StaticMesh->SetupAttachment(RootComponent);
}


void AFuelLineStart::OnRep_FuelLineConnected() {
}

void AFuelLineStart::CallbackNextSegmentChanged(UTrackBuilderUsable* InUsable, ATrackBuilderSegment* InSegment) {
}

void AFuelLineStart::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFuelLineStart, bFuelLineConnected);
}


