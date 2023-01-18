#include "FlareController.h"

class AActor;
class AFlare;
class AFlareGunProjectile;
class UObject;

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

