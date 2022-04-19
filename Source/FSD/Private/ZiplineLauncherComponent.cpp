#include "ZiplineLauncherComponent.h"

void UZiplineLauncherComponent::Server_Fire_Implementation(FVector_NetQuantize Origin, FVector_NetQuantize Destination) {
}
bool UZiplineLauncherComponent::Server_Fire_Validate(FVector_NetQuantize Origin, FVector_NetQuantize Destination) {
    return true;
}

void UZiplineLauncherComponent::All_ShowHit_Implementation() {
}

UZiplineLauncherComponent::UZiplineLauncherComponent() {
    this->HitCollisionChannel = ECC_GameTraceChannel7;
    this->ProjectileLocationOffset = 25.00f;
    this->ProjectileClass = NULL;
}

