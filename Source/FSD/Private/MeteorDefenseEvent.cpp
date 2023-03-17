#include "MeteorDefenseEvent.h"
#include "Net/UnrealNetwork.h"

void AMeteorDefenseEvent::SetMeteor(APlagueMeteor* NewMeteor) {
}

APlagueMeteor* AMeteorDefenseEvent::GetMeteor() {
    return NULL;
}

void AMeteorDefenseEvent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMeteorDefenseEvent, meteor);
}

AMeteorDefenseEvent::AMeteorDefenseEvent() {
    this->Duration = 100.00f;
    this->InitialProgress = 30.00f;
    this->meteor = NULL;
}

