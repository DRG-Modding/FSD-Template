#include "LaserPointerMarker.h"
#include "Net/UnrealNetwork.h"

class APlayerCharacter;

APlayerCharacter* ALaserPointerMarker::GetCharacter() const {
    return NULL;
}

void ALaserPointerMarker::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALaserPointerMarker, LookAtActor);
    DOREPLIFETIME(ALaserPointerMarker, LookAtComponent);
    DOREPLIFETIME(ALaserPointerMarker, LookAtTerrainMaterial);
}

ALaserPointerMarker::ALaserPointerMarker() {
    this->LookAtActor = NULL;
    this->LookAtComponent = NULL;
    this->LookAtTerrainMaterial = NULL;
}

