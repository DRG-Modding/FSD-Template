#include "LaserPointerItem.h"
#include "Components/SceneComponent.h"

void ALaserPointerItem::UnlockToMinersManual(UObject* WorldContextObject, FGuid ObjectID) {
}

void ALaserPointerItem::ToggleLaserVisible_Implementation(bool aVisible) {
}

void ALaserPointerItem::ServerPlaceMarker_Implementation(FVector Location, AActor* Actor, UPrimitiveComponent* Cmponent, UTerrainMaterial* TerrainMaterial, ELaserPointerMarkerType eMarkerType) {
}

void ALaserPointerItem::Server_SecondaryUse_Implementation() {
}


void ALaserPointerItem::GetPointTransform_Implementation(FTransform& PointTransform) {
}

ALaserPointerItem::ALaserPointerItem() {
    this->MarkerType = NULL;
    this->SecondaryMarkerType = NULL;
    this->WaypointType = NULL;
    this->MaxWaypoints = 3;
    this->NextWaypointIndex = 0;
    this->MarkerLifeTime = 4.00f;
    this->DefaultLookAtShout = NULL;
    this->DefaultEnemyShout = NULL;
    this->PointerComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Pointer"));
    this->LookAtDistance = 0.00f;
    this->LookAtShout = NULL;
    this->MissionControlLookAtShout = NULL;
    this->GameState = NULL;
}

