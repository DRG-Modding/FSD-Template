#include "LaserPointerItem.h"
#include "Components/SceneComponent.h"

class UObject;
class AActor;
class UPrimitiveComponent;
class UTerrainMaterial;

void ALaserPointerItem::UnlockToMinersManual(UObject* WorldContextObject, FGuid ObjectID) {
}

void ALaserPointerItem::ToggleLaserVisible_Implementation(bool aVisible) {
}

void ALaserPointerItem::ServerPlaceMarker_Implementation(FVector Location, AActor* Actor, UPrimitiveComponent* Cmponent, UTerrainMaterial* TerrainMaterial, ELaserPointerMarkerType eMarkerType) {
}
bool ALaserPointerItem::ServerPlaceMarker_Validate(FVector Location, AActor* Actor, UPrimitiveComponent* Cmponent, UTerrainMaterial* TerrainMaterial, ELaserPointerMarkerType eMarkerType) {
    return true;
}

void ALaserPointerItem::Server_SecondaryUse_Implementation() {
}
bool ALaserPointerItem::Server_SecondaryUse_Validate() {
    return true;
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
    this->GameState = NULL;
}

