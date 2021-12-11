#include "FlareController.h"

class AFlareGunProjectile;
class AFlare;
class UObject;
class AActor;

void UFlareController::UnregisterFlareGunProjectile(AFlareGunProjectile* flareprj) {
}

void UFlareController::UnregisterFlare(AFlare* Flare) {
}

void UFlareController::RegisterFlareGunProjectile(AFlareGunProjectile* flareprj) {
}

void UFlareController::RegisterFlare(AFlare* Flare) {
}

AActor* UFlareController::FindFlareNear(UObject* WorldContextObject, FVector Pos, bool allowMoving, float maxLightRadiusFraction) {
    return NULL;
}

UFlareController::UFlareController() {
}

