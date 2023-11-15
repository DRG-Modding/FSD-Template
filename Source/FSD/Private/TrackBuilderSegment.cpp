#include "TrackBuilderSegment.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"
#include "TrackBuilderUsable.h"

ATrackBuilderSegment::ATrackBuilderSegment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->NextSegmentUsable = CreateDefaultSubobject<UTrackBuilderUsable>(TEXT("NextSegmentUsable"));
}

bool ATrackBuilderSegment::UpdatePlacement(const FTransform& InTransform, UTrackBuilderConnectPoint* InConnectPoint, bool InPlacementValid, AItem* PlaceableItem) {
    return false;
}





bool ATrackBuilderSegment::ReceiveCanPlaceAt_Implementation(const FTransform& InCandidateTransform, UTrackBuilderConnectPoint* InConnectPoint) {
    return false;
}

void ATrackBuilderSegment::OnRep_SegmentEndTransform() {
}

UTrackBuilderUsable* ATrackBuilderSegment::GetTrackStartUsable() const {
    return NULL;
}

AActor* ATrackBuilderSegment::GetTrackStartActor() const {
    return NULL;
}

FTransform ATrackBuilderSegment::GetStartTransform() const {
    return FTransform{};
}

FTransform ATrackBuilderSegment::GetSegmentEndTransform() const {
    return FTransform{};
}

ETrackBuildPlacementState ATrackBuilderSegment::GetPlacementState() const {
    return ETrackBuildPlacementState::NotBeingPlaced;
}

ATrackBuilderSegment* ATrackBuilderSegment::GetNextSegment(bool bForward) const {
    return NULL;
}

bool ATrackBuilderSegment::GetIsSegmentEndTransformValid() const {
    return false;
}

UTrackBuilderConnectPoint* ATrackBuilderSegment::GetConnectPoint() const {
    return NULL;
}

bool ATrackBuilderSegment::CanPlaceAt(const FTransform& InCandidateTransform, UTrackBuilderConnectPoint* InConnectPoint, AItem* PlaceableItem) {
    return false;
}

void ATrackBuilderSegment::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATrackBuilderSegment, BuiltByCharacter);
    DOREPLIFETIME(ATrackBuilderSegment, BuiltFromUsable);
    DOREPLIFETIME(ATrackBuilderSegment, ServerSegmentEndTransform);
}


