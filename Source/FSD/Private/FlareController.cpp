#include "FlareController.h"

class UObject;
class AActor;
class AFlareGunProjectile;
class AFlare;

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

