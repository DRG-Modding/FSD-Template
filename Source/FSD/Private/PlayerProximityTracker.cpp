#include "PlayerProximityTracker.h"

class UObject;

void UPlayerProximityTracker::Receive_RegisterForLocalPlayerProximity(UObject* WorldContextObject, const FVector& Location, float Distance, const FPlayerProximityDelegate& proximityCallback, bool triggerOnlyOnce) {
}

void UPlayerProximityTracker::Receive_RegisterForAnyPlayerProximity(UObject* WorldContextObject, const FVector& Location, float Distance, const FPlayerProximityDelegate& proximityCallback, bool triggerOnlyOnce) {
}

FPlayerSphere UPlayerProximityTracker::GetPrimarySphere() const {
    return FPlayerSphere{};
}

TArray<FPlayerSphere> UPlayerProximityTracker::GetPlayerSpheres() const {
    return TArray<FPlayerSphere>();
}

UPlayerProximityTracker::UPlayerProximityTracker() {
    this->MaxDistanceBetweenPlayers = 2000.00f;
    this->PlayerSpheresUpdateRatePerSecond = 2.00f;
}

